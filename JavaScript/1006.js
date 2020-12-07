let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let numero1 = parseFloat(lines.shift());
let numero2 = parseFloat(lines.shift());
let numero3 = parseFloat(lines.shift());
let media = (numero1 * 2 + numero2 * 3 + numero3 * 5) / 10;

console.log(`MEDIA = ${media.toFixed(1)}`);