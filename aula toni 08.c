#include <stdio.h>
#include <locale.h>
int main(){

setlocale(LC_ALL, "Portuguese");
int vetor[10];
int soma, k=0, i =0, y=0;
int par[10];
int impar[10];

for(i=0; i<10; i++){
    printf("Digite o %d� n�mero: ", i+1);
    scanf("%d", &vetor[i]);

    if(vetor[i]%2 == 0){
        y++;
        par[y] = vetor[i];
        soma += vetor[i];
    }
    else{
        k++;
        impar[k] = vetor[i];
    }
}
for(i=1; i<=y; i++){
    for(i=1; i<=y; i++){
    printf("\nO %d� n�mero par �: %d", i, par[i]);
    }
}

for(i=1; i<= k; i++){
    for(i=1; i<=y; i++){
    printf("\nO %d� n�mero impar �: %d", i, impar[i]);
    }

}

//A raz�o pela qual os printf est�o dentro dos loops for �
//para garantir que cada elemento do array seja impresso na tela.
// Se os printf estivessem fora dos loops,
//apenas o primeiro elemento de cada array seria impresso,
//pois os loops seriam executados apenas uma vez. Colocando os printf dentro dos loops,
//garantimos que todos os elementos dos arrays sejam exibidos.
printf("\n\nA soma dos pares: %d", soma);
printf("\nA quantidade de impares: %d\n\n", k);

return 0;
}
