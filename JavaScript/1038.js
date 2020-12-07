let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');
let valores = lines[0].split(' ');

let codigo = parseInt(valores.shift());
let quantidade = parseInt(valores.shift());
let valor;

switch(codigo) {
    case 1:
        valor = 4.00 * quantidade;
        console.log(`Total: R$ ${valor.toFixed(2)}`);
        break;

    case 2:
        valor = 4.50 * quantidade;
        console.log(`Total: R$ ${valor.toFixed(2)}`);
        break;

    case 3:
        valor = 5.00 * quantidade;
        console.log(`Total: R$ ${valor.toFixed(2)}`);
        break;

    case 4:
        valor = 2.00 * quantidade;
        console.log(`Total: R$ ${valor.toFixed(2)}`);
        break;

    default:
        valor = 1.50 * quantidade;
        console.log(`Total: R$ ${valor.toFixed(2)}`);
}