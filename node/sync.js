var fs = require('fs');

var buff = fs.readFileSync(process.argv[2]);
var file = buff.toString();

var arr = file.split('\n');

console.log(--arr.length);
