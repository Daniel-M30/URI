let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');
let coordenadas1 = lines[0].split(' ');
let coordenadas2 = lines[1].split(' ');

let x1 = parseFloat(coordenadas1.shift());
let y1 = parseFloat(coordenadas1.shift());
let x2 = parseFloat(coordenadas2.shift());
let y2 = parseFloat(coordenadas2.shift());

let distancia = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));

console.log(distancia.toFixed(4));