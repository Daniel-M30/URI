let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let segundos = parseInt(lines.shift());

let hor = 0, min = 0, seg = 0;

while( segundos >= 3600 ) {
    segundos -= 3600;
    hor++;
}

while( segundos >= 60 ) {
    segundos -= 60;
    min++;
}

while( segundos >= 1 ) {
    segundos--;
    seg++;
}

console.log(`${hor}:${min}:${seg}`);