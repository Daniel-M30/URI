let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');

let distancia = parseInt(lines.shift());
let combustivelGasto = parseFloat(lines.shift());

const KmL = distancia / combustivelGasto;

console.log(`${KmL.toFixed(3)} km/l`);