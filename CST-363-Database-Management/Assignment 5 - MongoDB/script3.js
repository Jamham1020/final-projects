/* script3.js
* avg quantity for orders 
* eg. items: [{ itemNo: 1, qty: 4 }, { itemNo: 2, qty: 1} ]
* the total quantity for this order is 5.
* displays a single number
* avg of 2.675 items per order
*/
map = function() {
    emit(this.orderID, this.items.length);
    }
    
reduce = function(orderId, count) {
    
    return Array.sum(count) / count.length;
    
    }
    db.orders.mapReduce(map,reduce,{ out: "orders1" }
    )
    
    db.orders.find()
    db.orders.aggregate([{$group: {_id: null, avg: {$avg: "$value"}}}])
    
