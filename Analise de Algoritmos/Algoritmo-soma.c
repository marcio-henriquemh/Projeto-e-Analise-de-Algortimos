

#include <stdio.h>
#define MAX 5
//funcao principal 
//algoritmo de soma dos elementos de um vetor
//Discente: Márcio Henrique Matos de Freitas
//Estudo sobre Projeto e Análise de Algoritmos
//referencia:introdução a algoritmos - Thomas H. Cormen
int main(){

int vetor_A[MAX]={1,2,3,4,5};
int i=0;
int s=0;

//laço de repetição para soma dos elementos do vetor
while (i<=MAX)
{
    //soma dos elementos do vetor
    s=s+vetor_A[i];
    i=i+1;
}

// imprime o resultado da soma dos elementos do vetor
printf(" A soma dos vetores é igual a%d ",s);
printf("\n");
return 0;


}