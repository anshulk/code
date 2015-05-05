var fs = require('fs');

fs.readFile(process.argv[2], function(error, data) {
	if(error)
		console.log("Error");
	else
		console.log(data.toString().split('\n').length - 1);
});
