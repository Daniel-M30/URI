let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let valor = parseFloat(lines.shift());
let n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
let m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0;

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
    valor--;
    n1++;
}

while( valor >= 0.50 ) {
    valor -= 0.50;
    m50++;
}

while( valor >= 0.25 ) {
    valor -= 0.25;
    m25++;
}

while( valor >= 0.10 ) {
    valor -= 0.10;
    m10++;
}

while( valor >= 0.05 ) {
    valor -= 0.05;
    m5++;
}

while( valor >= 0.01 ) {
    valor -= 0.01;
    m1++;
}

console.log('NOTAS:');
console.log(`${n100} nota(s) de R$ 100.00`);
console.log(`${n50} nota(s) de R$ 50.00`);
console.log(`${n20} nota(s) de R$ 20.00`);
console.log(`${n10} nota(s) de R$ 10.00`);
console.log(`${n5} nota(s) de R$ 5.00`);
console.log(`${n2} nota(s) de R$ 2.00`);
console.log('MOEDAS:');
console.log(`${n1} moeda(s) de R$ 1.00`);
console.log(`${m50} moeda(s) de R$ 0.50`);
console.log(`${m25} moeda(s) de R$ 0.25`);
console.log(`${m10} moeda(s) de R$ 0.10`);
console.log(`${m5} moeda(s) de R$ 0.05`);
console.log(`${m1} moeda(s) de R$ 0.01`);