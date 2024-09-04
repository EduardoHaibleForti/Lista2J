#include <stdio.h>
#include <stdlib.h>

int main (){
    int qtdeNotas1Real;
    int qtdeNotas10Reais;
    int qtdeNotas50Reais;
    int qtdeNotas100Reais;
    int valorTotal;

    printf("Digite a quantidade de notas de 1 real :");
    scanf("%d",&qtdeNotas1Real);

    printf("Digite a quantidade de notas de 10 reais :");
    scanf("%d",&qtdeNotas10Reais);

    printf("Digite a quantidade de notas de 50 reais :");
    scanf("%d",&qtdeNotas50Reais);

    printf("Digite a quantidade de notas de 100 reais :");
    scanf("%d",&qtdeNotas100Reais);

    valorTotal=1*qtdeNotas1Real + 10*qtdeNotas10Reais + 50*qtdeNotas50Reais + 100*qtdeNotas100Reais;

    printf("O valor total : %d\n",valorTotal);


    return 0;
}
