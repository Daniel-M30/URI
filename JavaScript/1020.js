let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let idadeDias = parseInt(lines.shift());

let anos = 0, meses = 0;

while( idadeDias >= 365 ) {
    idadeDias -= 365;
    anos++;
}

while( idadeDias >= 30 ) {
    idadeDias -= 30;
    meses++;
}

console.log(anos + " ano(s)");
console.log(meses + " mes(es)");
console.log(idadeDias + " dia(s)");