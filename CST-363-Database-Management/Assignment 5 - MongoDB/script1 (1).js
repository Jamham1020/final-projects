// drop collection 'patients'
db.patients.drop();

//Part 1
/* -- 1 -- 
* use insert, create 3 documents
* each document has attributes: name, ssn, age, and address
* patients age: 10, 20, 30
**/
db.patients.insertMany( [
    {
       "patients_name": "Percy",
       "patients_ssn": "000-000-100",
       "patients_age": 10,
       "address": { 
               "street": "1010 Poseidon Way",
               "city": "Oceanside",
               "state": "CA",
               "zip": "92003"
               },
    },
    {
        "patients_name": "Nico",
        "patients_ssn": "000-000-200",
        "patients_age": 20,
        "address": { 
                "street": "1020 Hades St.",
                "city": "Hollywood",
                "state": "CA",
                "zip": "33004"
                },
     },
     {
        "patients_name": "Thalia",
        "patients_ssn": "000-000-300",
        "patients_age": 30,
        "address": { 
                "street": "1030 Zeus Dr.",
                "city": "Sky Valley",
                "state": "CA",
                "zip": "92241"
                },
        "prescriptions" : [
            { rxid: "RX743009", tradename : "Hydrochlorothiazide" },
            { rxid : "RX656003", tradename : "LEVAQUIN", formula : "levofloxacin"}
        ]

     },
    ]); 

    // -- 3 -- 
    // retrieve and list all patient data using the find() method
    cursor = db.patients.find();
    print("Print all patients and their data.")
    while(cursor.hasNext()){
        const doc = cursor.next();
        printjsononeline(doc);
    }

    // -- 4 -- 
    // retrieve the patient document whose age = 20 using findOne()
    doc = db.patients.findOne({patients_age:20});
    print("FindOne with age 20.")
    printjsononeline(doc);

    // -- 5 -- 
    // retrieve the patients where age is less than 25 using find().
    cursor1 = db.patients.find( {patients_age: {"$lt": 25} });
    print("people under 25.")
    while(cursor1.hasNext()){
        doc = cursor1.next();
        printjsononeline(doc);
    }

    // -- 6 -- 
    // using the drop method to delete the entire collection
    db.patients.drop();






 
