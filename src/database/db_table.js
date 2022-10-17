import mysql from 'mysql'

var con = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "root",
  database: "clientl"
});

con.connect(function(err) {
  if (err) throw err;
  console.log("Connected!");
  var sql = "CREATE TABLE users (name VARCHAR(255), avatar VARCHAR(255))";
  con.query(sql, function (err, result) {
    if (err) throw err;
    console.log("Table created");
  });
});
