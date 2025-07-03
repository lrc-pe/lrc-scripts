/* Test name:    truapi-hits-throughput
 * Script name:  truapi-hits-throughput.js
 */
'use strict';

exports = module.exports = function (vuser) {
  var vuserId, testUrl, requestOptions;
 
  /* prepare test data */
  vuserId = vuser.getVUserId();

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

	svc.transaction.start('transaction_to_pass');
	svc.transaction.thinkTime('transaction_to_pass',1000*3,function(){
	    svc.datapoint.add('mic_recv', 500);
	    svc.datapoint.add('HTTP_200', 5);
	    svc.transaction.end('transaction_to_pass', svc.transaction.PASS);
		return;
	});

	
    svc.transaction.start('transaction_to_fail');
    svc.transaction.thinkTime('transaction_to_fail',1000*5,function(){
	  	svc.datapoint.add('mic_recv', 500);
	    svc.datapoint.add('HTTP_200', 5);
	    svc.logger.error('This is an error for test!');
	    svc.transaction.end('transaction_to_fail', svc.transaction.FAIL);
	    done(); 
	});
    //});
  });
};

