let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let numero1 = parseInt(lines.shift());
let numero2 = parseInt(lines.shift());
let numero3 = parseInt(lines.shift());
let numero4 = parseInt(lines.shift());
let diferenca = numero1 * numero2 - numero3 * numero4;

console.log(`DIFERENCA = ${diferenca}`);