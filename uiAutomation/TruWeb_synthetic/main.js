load.initialize(async function() {
	
});

load.action('Action', async function() {
  const tranIdxPg = new load.Transaction('Test');
  tranIdxPg.start();
  load.sleep(5);  
  tranIdxPg.stop(load.TransactionStatus.Passed);
});

load.finalize(async function() {
	
});
