-- hw6.sql
--   Janet Pham 
-- 1  Mapping of production to warehouse tables and columns
--
--  The product.description and PRODUCT.Description from HSD data is the product.ProductType and PRODUCT.ProductName in HSDDW, respectively. 
--  The (Customer.LastName + ',' + CUSTOMER.FirstName) is Customer.CustomersName in HSDDW
--  CUSTOMER.Phone -> Customer.PhoneAreaCode
--  CUSTOMER.EmailAddress -> Customer.EmailDomain
--  (LINE_ITEM.Quantity*Line_ITEM.UnitPrice) -> PRODUCT_SALE.Total 
-- These are the transformations that were done in the HSD Operational Database to the HSDDW.
-- HSDDW
-- 

-- 2 Load data for table SALES_FOR_RFM  
insert into SALES_FOR_RFM(TimeID, CustomerID, PreTaxTotalSales)
select a.timeid, a.customerid, sum(a.total)
from product_sales a, timeline b, customer c
where a.timeid = b.timeid and a.customerid = c.customerid
group by a.timeid, a.customerid; 

-- 3  create view of total dollar amount of each product for each year 
create view D_AnnualSales as select 
c.customerID, c.customerName, c.City, p.productNumber, p.productName, t.Year, t.QuarterText,
sum(ps.Total) as TotalDollarAmount
from customer c, product_sales ps, product p, timeline t
where c.CustomerId = ps.CustomerID
and p.productNumber = ps.ProductNumber
and t.timeId = ps.TimeID
group by c.customerId, c.customerName, c.City, p.ProductNumber, p.ProductName, t.QuarterText, t.Year
order by c.CustomerName, t.Year, t.QuarterText; 

-- 4  populate the product_sales table with the new payment_id column.
/* HSD Data Warehouse star schema table */

DROP SCHEMA IF EXISTS hsddw;
CREATE SCHEMA hsddw;
USE hsddw;


create table timeline(
	timeid 		int 		not null auto_increment primary key,
	date   		date 		not null,
	monthid 	int		not null,
	monthtext 	char(15) 	not null,
	quarterid 	int		not null,
	quartertext 	char(10) 	not null,
	year		char(10)	not null
);

create table customer (
	customerid	int		not null primary key,
	customername	varchar(75)	not null,
	emaildomain	varchar(100)	not null,
	phoneareacode	char(6)		not null,
	city		char(35)	 null,
	state		char(2)		 null,
	zip		char(10)	 null
);
create table payment_type(
	payment_type_id int not null primary key,
    payment_type varchar(35) not null
);
create table product (
	productnumber	char(35)	not null primary key,
	producttype	char(25)	not null,
	productname	varchar(75)	not null
);

create table product_sales (

		timeid		int		not null,

		customerid	int		not null,

		productnumber	char(35)	not null,

		quantity	int		not null,

		unitprice	numeric(9,2)	not null,

		total		numeric(9,2)	null,



	constraint product_sales_pk primary key (timeid, customerid, productnumber),


 
	constraint timeline_fk foreign key(timeid) references timeline(timeid) 
	
	 on delete no action on update no action,



       constraint customerid_fk foreign key(customerid) references customer(customerid) 
		
         on delete no action on update no action,



      constraint product_fk foreign key(productnumber) references product(productnumber)
	
        on delete no action	on update no action 


);


/*  months table used when loading timeline table */

create table months (
	monthid		int		not null,
	monthtext	char(15)	not null,
	quarterid	int		not null,
	quartertext	char(10)	not null
);

insert into payment_type values
(1,'VISA'),
(2, 'MasterCard'),
(3, 'Cash'),
(4, 'American Express'),
(5, 'PayPal'),
(6, 'Check');

insert into months values
(1, 'January', 1, 'Qtr1'),
(2, 'February', 1, 'Qtr1'),
(3, 'March', 1, 'Qtr1'),
(4, 'April', 2, 'Qtr2'),
(5, 'May', 2, 'Qtr2'),
(6, 'June', 2, 'Qtr2'),
(7, 'July', 3, 'Qtr3'),
(8, 'August', 3, 'Qtr3'),
(9, 'September', 3, 'Qtr3'),
(10, 'October', 4, 'Qtr4'),
(11, 'November', 4,'Qtr4'),
(12, 'December', 4, 'Qtr4');

/*  load the timeline table from invoice data */

insert into hsddw.timeline (date, monthid, monthtext, quarterid, quartertext, year) 

select distinct a.invoicedate, month(a.invoicedate), b.monthtext, b.quarterid, b.quartertext, year(a.invoicedate)

from hsd.invoice a, hsddw.months b where month(a.invoicedate) = b.monthid; 
	
/* load the hsddw customer table from hsd customer */

insert into hsddw.customer 

(customerid, customername, emaildomain, phoneareacode, city, state, zip)
 
select customerid, concat( trim(lastname), ' ', trim(firstname)), substring(emailaddress, locate('@', emailaddress)+1),   
         substring(phone,1,3), city, state, zip 

from hsd.customer;

/* load hsddw product table from hsd product */

insert into hsddw.product select productnumber, producttype, productdescription from hsd.product;

/* load product sales */ 
/* multiple sales of the same product to the same customer on same date are combined */

insert into hsddw.product_sales 

 (timeid, customerid, productnumber, quantity, unitprice, total) 

select  c.timeid, a.customerid, b.productnumber, sum(b.quantity), min(b.unitprice), sum(b.total)
 
from  hsd.invoice a, hsd.line_item b, hsddw.timeline c  
 
where a.invoicenumber = b.invoicenumber and a.invoicedate=c.date
 
group by c.timeid, a.customerid, b.productnumber;

alter table product_sales 
add payment_type_id int null;

