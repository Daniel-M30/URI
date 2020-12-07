let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let minutos = parseInt(lines.shift());

let alcanca = minutos * 2;

console.log(`${alcanca} minutos`);