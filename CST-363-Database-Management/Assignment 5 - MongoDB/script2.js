// script2.js 
// show zipcode that starts with '9'
// count customers for each zip code
// 51 zipcodes - there are more than 51 that contains '9' at the start


mapz = function() {
  address = this.address;
  zip = address.zip;
  emit(this.customerId, {zipcode:zip})
  }
  
  reducez = function(key, values) {
  for (x of values) {
  zip = x.zipcode;
  }
  if (zip.startsWith('9') )
  return {zipcode:zip};
  }

  emit = function(key, value) {
  print("key:", key, "value:");
  printjsononeline(value);
  }
  
  print("Map test:");
  q = db.customers.find();
  while (q.hasNext()) {
  doc = q.next();
  printjsononeline(doc);
  mapz.apply(doc);
  }
  
  db.customers.mapReduce(mapz, reducez, {out: "example1"});
  
  q = db.example1.find().sort( { _id:1 } );
  print("Output from map reduce.");
  while ( q.hasNext() ){
  printjsononeline(q.next());
  }