/* Test name:    truapi-16.187.191.131
 * Script name:  truapi-16.187.191.131.js
 */
'use strict';

exports = module.exports = function (vuser) {
  var vuserId, testUrl, requestOptions;
 
  /* prepare test data */
  vuserId = vuser.getVUserId();
  testUrl = 'http://50.112.197.225/';

  /* init action */
  vuser.init('Vuser init action', function (svc, done) {
    svc.logger.info('Vuser %s init, test url is %s', vuserId, testUrl);
   
    /* prepare the request options */
    requestOptions = { url: testUrl };
    if (process.env.http_proxy) {
      /* update proxy settings */
      requestOptions.proxy = process.env.http_proxy;
    }
    done();
  });

  /* main action */
  vuser.action('Vuser main action', function (svc, done) {
    svc.logger.info('Vuser %s running', vuserId);

    /* send request to server */
    function sendRequest() {
      svc.request(requestOptions, function (err, res, body) {
        if (err) {
          svc.logger.error('request error %s', err.toString());
          svc.transaction.end('urlTest', svc.transaction.FAIL);
          done();
          return;
        }

        svc.transaction.end('urlTest', svc.transaction.PASS);
        done();
      });
    }

    svc.transaction.start('urlTest');
    svc.transaction.thinkTime('urlTest', 0, function () {
      sendRequest();
    });
  });
};

