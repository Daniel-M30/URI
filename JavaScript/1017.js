let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let horas = parseInt(lines.shift());
let velocidade = parseInt(lines.shift());

const litros = (horas * velocidade ) / 12.0;

console.log(litros.toFixed(3));