let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let nome = lines.shift();
let salario = parseFloat(lines.shift());
let montante = parseFloat(lines.shift());

let salarioFinal = salario + montante * 0.15;

console.log(`TOTAL = R$ ${salarioFinal.toFixed(2)}`);