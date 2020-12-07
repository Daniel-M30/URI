let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

const repeticao = parseInt(lines.shift());
for( let i = 0; i < repeticao; i++ ) {
    for( let j = 0; j < lines[i].length; j++ ) {
        if( (lines[i].charCodeAt(j) > 64 && lines[i].charCodeAt(j) < 91) || (lines[i].charCodeAt(j) > 96 && lines[i].charCodeAt(j) < 123) ) {
            lines[i] = lines[i].replace(lines[i].substring(j, j), String.fromCharCode(lines[i].charCodeAt(j) + 3));
            console.log(lines[i][j]);
        }
    }
}