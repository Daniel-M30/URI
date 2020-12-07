let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');
let valores = lines[0].split(' ');

let A = parseInt(valores.shift());
let B = parseInt(valores.shift());
let C = parseInt(valores.shift());
let D = parseInt(valores.shift());

if( B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0 )
    console.log('Valores aceitos');

else
    console.log('Valores nao aceitos');