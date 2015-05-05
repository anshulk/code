var fs = require('fs');
var path = require('path');

var dir = process.argv[2];
var ext = "."+process.argv[3];
fs.readdir(dir, function(error, list) {
	if(error)
		console.log("Error");
	for(name in list) {
		if(path.extname(list[name]) == ext)
			console.log(list[name]);
	}
});
