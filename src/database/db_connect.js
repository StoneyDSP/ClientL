import mysql from 'mysql'

var con = mysql.createConnection({
	host: "localhost",
	user: "root",
	password: "root"
  });

  con.connect(function(err) {
	if (err) throw err;
	console.log("Connected!");
  });
