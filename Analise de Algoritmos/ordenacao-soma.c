#include<stdlib.h>  
#include<stdio.h>
#define MAX 5

// algortimo de ordenação por inserção
//Discente: Márcio Henrique Matos de Freitas
//Estudo sobre Projeto e Análise de Algoritmos
//referencia:introdução a algoritmos - Thomas H. Cormen
// mudando a condicao da chave eu tenho a ordenacao do maior para o menor.
//função principal
int main(){
//vetor desordenado
int vet[MAX]={5,2,4,6,1,3};
//variaveis auxiliares
int i,j;
int chave,soma;

//laço
for(int j=0; j<MAX;j++){
printf("Informe seu indice j do vetor:");
scanf("%d",&j);
//pega o valor da chave
chave=vet[j];
i=j-1;

//laço 2
while(i>=0 && vet[i]<=chave){

    vet[i+1]=vet[i];
    i=i-1;
//imprime o vetor temporario    
    printf("Vetor temporario: ");
    for(int i = 0; i < MAX; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");

}
//insere a chave na posição correta
vet[i+1]=chave;



}//imprime o vetor ordenado
    printf("Vetor ordenado: ");
    for(i = 0; i < MAX; i++){
        printf("%d ", vet[i]);
       soma+=vet[i];
    }
    printf("\n");
    printf("a soma dos vetores foi:%d",soma);
    return 0;

}
