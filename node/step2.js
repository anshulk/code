var arr = process.argv;

var i;
var sum=0;
for(i=2; i<arr.length;i++)
	sum += +arr[i];

console.log(sum);
