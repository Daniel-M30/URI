let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let numero1 = parseInt(lines.shift());
let numero2 = parseInt(lines.shift());
let prod = numero1 * numero2;

console.log(`PROD = ${prod}`);