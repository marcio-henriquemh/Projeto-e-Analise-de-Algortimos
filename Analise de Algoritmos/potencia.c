#include<stdio.h>
#include<stdlib.h>

// Função que calcula a potencia de um numero x elevado a n
// onde x é a base e n é o expoente
// Exemplo: potencia(2,3) = 2*2*2 = 8
// Entrada: dois inteiros x e n
// Saída: inteiro p que é o resultado de x elevado a n
int potencia(int x, int n){
    // Declaração de variáveis
    int p=1;
    int i=0;
    // Loop para calcular a potencia
    while (i<n)
    {
        p=p*x;
        i=i+1;
    }
    printf("Valor da potencia %d:",p);
    printf("\n");
}


// Função principal
int main(){

    int a,b;

//  Entrada de dados        
    printf("Qual o valor de n:");
    scanf("%d",&a);
    printf("O valor da potencia de x:");
    scanf("%d",&b);

    potencia(a,b);
    return 0;
}