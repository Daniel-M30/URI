let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');
let conteudo = lines[0].split(' ');

const a = parseFloat(conteudo.shift());
const b = parseFloat(conteudo.shift());
const c = parseFloat(conteudo.shift());

if( a + b > c && b + c > a && c + a > b ) {
    const perimetro = a + b + c;
    console.log(`Perimetro = ${perimetro.toFixed(1)}`);
}

else {
    const area = ((a + b) * c) / 2;
    console.log(`Area = ${area.toFixed(1)}`);
}