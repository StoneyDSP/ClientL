const http = require('http')

let message = '';
const hostname = '127.0.0.1'
const port = 3000

if (process.env.NODE_ENV === 'development') {
  message = `Running in ${process.env.NODE_ENV} mode\n`;
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
