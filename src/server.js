// import logger from './modules/loggers/logger.js';
// import ClientL from './include/ClientL/ClientL.h';
import dotenv from 'dotenv';
import CMake from 'cmake-js/lib/cMake.js';
import async from 'async';
import semver from 'semver';
import inquirer from 'inquirer';
import http from 'http'
import mysql from 'mysql'
import repl from 'repl'
import fs from 'fs'


// loads .env file contents into 'process.env.'
const config = dotenv.config();

// configuration environment
let report = `Running in ${process.env.NODE_ENV} mode`;
if (process.env.NODE_ENV === 'development') {
  console.log(report + ` under ${process.env.CONFIG} configuration`) ;
}
else {
  console.log(report);
}

if (['production', 'staging'].includes(process.env.NODE_ENV)) {
  // ...
}

const questions = [
  {
    type: 'input',
    name: 'hostid',
    message: "What's your host address?",
    default: '127.0.0.1'
  },
  {
    type: 'input',
    name: 'portid',
    message: "What's your port address?",
    default: '3000'
  },
  {
    type: 'input',
    name: 'userid',
    message: "What's your username?"
  },
  {
    type: 'input',
    name: 'keyid',
    message: "What's your key or passphrase?"
  },
];

inquirer.prompt(questions)
        .then(answers => {
          server.listen((answers.portid), (answers.hostid), () =>
          {
            console.log(`Server running at http://${answers.hostid}:${answers.portid}/`)
            console.log(answers.userid)
          })
        })
        .catch(error => {
                          if (error.isTtyError)
                          {
                            console.log(`Prompt couldnt be rendered in the current environment`)
                          }
                          else
                          {
                            console.log(`Something else went wrong`)
                          }
                        })
;

const server = http.createServer((req, res) => {
  res.statusCode = 200
  res.setHeader('Content-Type', 'text/plain')
  res.end('Server created.')
})

// database
var con = mysql.createConnection({
  host: "localhost",
  user: "yourusername",
  password: "yourpassword",
  database: "clientl"
});

con.connect(function(err) {
  if (err) throw err;
  console.log("Connected!");
  con.query(sql, function (err, result) {
    if (err) throw err;
    console.log("Result: " + result);
  });
});
