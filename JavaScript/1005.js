let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let numero1 = parseFloat(lines.shift());
let numero2 = parseFloat(lines.shift());
let media = (numero1 * 3.5 + numero2 * 7.5) / 11;

console.log(`MEDIA = ${media.toFixed(5)}`);