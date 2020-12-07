let input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
let lines = input.split('\n');
let notas = lines[0].split(' ');

let n1 = parseFloat(notas.shift());
let n2 = parseFloat(notas.shift());
let n3 = parseFloat(notas.shift());
let n4 = parseFloat(notas.shift());

let media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
console.log(`Media: ${media.toFixed(1)}`);

if( media >= 7 )
    console.log('Aluno aprovado.');

else if( media >= 5 && media <= 6.9 ) {
    console.log('Aluno em exame.')
    
    let notaExame = parseFloat(lines[1]);
    let mediaFinal = (notaExame + media) / 2;

    console.log(`Nota do exame: ${notaExame.toFixed(1)}`);
    
    if( mediaFinal >= 5 )
        console.log('Aluno aprovado.');

    else
        console.log('Aluno reprovado.');

    console.log(`Media final: ${mediaFinal.toFixed(1)}`);
}

else
    console.log('Aluno reprovado.');