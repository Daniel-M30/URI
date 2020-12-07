let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let valor = parseInt(lines.shift());
let n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, aux = valor;

while( valor >= 100 ) {
    valor -= 100;
    n100++;
}

while( valor >= 50 ) {
    valor -= 50;
    n50++;
}

while( valor >= 20 ) {
    valor -= 20;
    n20++;
}

while( valor >= 10 ) {
    valor -= 10;
    n10++;
}

while( valor >= 5 ) {
    valor -= 5;
    n5++;
}

while( valor >= 2 ) {
    valor -= 2;
    n2++;
}

while( valor >= 1 ) {
    valor -= 1;
    n1++;
}

console.log(aux);
console.log(n100 + " nota(s) de R$ 100,00");
console.log(n50 + " nota(s) de R$ 50,00");
console.log(n20 + " nota(s) de R$ 20,00");
console.log(n10 + " nota(s) de R$ 10,00");
console.log(n5 + " nota(s) de R$ 5,00");
console.log(n2 + " nota(s) de R$ 2,00");
console.log(n1 + " nota(s) de R$ 1,00");