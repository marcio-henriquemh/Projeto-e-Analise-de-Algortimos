
#include<stdlib.h>
#include<stdio.h>   
#define n 3
// Função que realiza a busca linear em um vetor
// Entrada: vetor v, tamanho do vetor n, elemento a ser buscado x
// Saída: índice do elemento x no vetor v ou -1 se não encontrado

int busca_linear(int v,int vet[]){

    int i;
    i=0;

    printf("Informe o valor da chave que quer encontrar:");
    scanf("%d",&v);
    
    while (i<n){
        if (v==vet[i])
        {
            printf("Esse é o o indice e o valor na posição: %d%d", i, vet[i]);
            printf("\n");
        }
        
       i=i+1;
    }
      return -1;
}

int main(){

    int vet[n],v;

 for( int i = 0; i < n; i++)
    {
        printf("Informe os valores do vetor no indice %d:",i);
        scanf("%d",&vet[i]);
    }

    busca_linear(v,vet);
    return 0;
}