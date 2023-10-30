var matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]], Aleatorios = [[],[],[],[]], Zeros = [[],[],[],[]], Vencedor = -1, Tentativas = 0;

Zeros.forEach((table) => {
    table.length = 4;
    table.fill(0);
})

function sortear(){
  Tentativas++;
    Aleatorios.forEach((table) => {
        var elementIndex;
        table.length = 4;
        var sorteado = Math.floor(Math.random() * 100);
        for(var i = 0; i < 4; i++){
            if(matrix[i].indexOf(sorteado) != -1){
                Zeros[i][matrix[i].indexOf(sorteado)] = 1;
            }
            if(Zeros[i][0] == Zeros[i][1] && Zeros[i][1] == Zeros[i][2] && Zeros[i][2] == Zeros[i][3] && Zeros[i][3] == 1){
                Vencedor = 1;
            }
        }
    })
}

while(Vencedor == -1){
    sortear()
}

console.log("Você ganhou com " + Tentativas + " vezes sorteadas" + "! Sua cartela acabou em: "+ `[${Zeros[0]}]`+ `[${Zeros[1]}]`+ `[${Zeros[2]}]`+ `[${Zeros[3]}]`);





