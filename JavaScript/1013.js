function maiorAB( a, b ) {
    if( a > b )
        return (a + b + (a - b)) / 2;

    else
        return (a + b + (b - a)) / 2;
}

let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');
let valores = lines[0].split(' ');

let A = parseInt(valores.shift());
let B = parseInt(valores.shift());
let C = parseInt(valores.shift());

let parcial = maiorAB(A, B);
let maior = maiorAB(parcial, C);

console.log(maior + " eh o maior");
