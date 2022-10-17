// import logger from './modules/loggers/logger';
// import CMake from 'cmake-js/lib/cMake';
// import async from 'async';
// import semver from 'semver';
// import ClientL from './include/ClientL/ClientL.h';
require('dotenv').config();
const http = require('http')
const repl = require('repl');

let message = '';
const hostname = '127.0.0.1'
const port = 3000

if (process.env.NODE_ENV === 'development') {
  message = `Running in ${process.env.NODE_ENV} mode, ${process.env.CONFIG} configuration\n`;
}
else {
  message = `Running in ${process.env.NODE_ENV} mode\n`;
}

if (['production', 'staging'].includes(process.env.NODE_ENV)) {
  // ...
}

const server = http.createServer((req, res) => {
  res.statusCode = 200
  res.setHeader('Content-Type', 'text/plain')
  res.end(message)
})

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`)
  console.log(message)
})

const o = { a: 'foo', b: 'bar', c: 42 };
