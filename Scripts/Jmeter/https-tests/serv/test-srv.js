'use strict';

var https = require('https'),
  path = require('path'),
  fs = require('fs');

(function () {
  var options, serv;

  options = {
    requestCert: true,
    rejectUnauthorized: true,
    key: fs.readFileSync(path.join(__dirname, 'server-key.pem')),
    cert: fs.readFileSync(path.join(__dirname, 'server-cert.pem')),
    ca: [ fs.readFileSync(path.join(__dirname, 'ca-cert.pem')) ]
  };
  serv = https.createServer(options, function (req, res) {
    console.log('new request');
    res.writeHead(200);
    res.end('hello world\n');
  });

  serv.on('clientError', function (err) {
    if (err) {
      console.log('HTTPS clientError event: %s', err.toString());
    }
  }).on('error', function (err) {
    if (err) {
      console.log('https serv error: %s', err.toString());
    }
  });
  serv.listen(8000);
})();

