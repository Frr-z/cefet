/*
    var A, B, C;
    scanf("%d%d%d", "A", "B", "C");

    if(B-A<C-B){
        console.log(1);
    }else if(B-A>C-B){
        console.log(-1);
    }else if(B-A == C-B){
        console.log(0);
    }


*/

/*
var A, B, C;

if((A < B && B < C) || (A + B) < C){
    console.log(1);
}else if(A == B && B == C){
    console.log(3);
}else{
    console.log(2);
}
*/

var N, Produtos = [7,8,7,7,5,7], Total;

/*for(var i = 0; i < N; i++){
    var X;
    scanf("%d", "X");
    Produtos[i] = X;
}*/

function compare(a,b){
    return a - b;
}

Produtos.sort(compare);

if(Produtos.length % 3 == 0){
    Total = Produtos[Produtos.lenght - 1] + Produtos[Produtos.lenght - 2] + Produtos[Produtos.lenght - 3] ;    

}else{
    if(Produtos.length%2 == 0){
        Total = Produtos[0] + Produtos[Produtos.length - 1] + Produtos[Produtos.length - 2] ;
    }else{
        Total = Produtos[0] + Produtos[1] + Produtos[Produtos.length - 1] + Produtos[Produtos.length - 2]
    }

}

console.log(Total);
