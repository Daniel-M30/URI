let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let recebe = input.split('\n');
let lines1 = recebe[0].split(' ');
let lines2 = recebe[1].split(' ');

let cod1 = parseInt(lines1.shift());
let num1 = parseInt(lines1.shift());
let val1 = parseFloat(lines1.shift());

let cod2 = parseInt(lines2.shift());
let num2 = parseInt(lines2.shift());
let val2 = parseFloat(lines2.shift());

let total = num1 * val1 + num2 * val2;

console.log(`VALOR A PAGAR: R$ ${total.toFixed(2)}`);