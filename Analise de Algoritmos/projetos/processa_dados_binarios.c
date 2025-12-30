


// Atividade para o video "Processamento de Dados ordenados em Binários em C"
/*
Objetivo geral

Desenvolver um sistema simples que:

Ordena dados numéricos usando Selection Sort

Realiza soma binária entre representações binárias desses dados

Evidencia a importância dos algoritmos básicos como fundação da computação
*/

//parte 1


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define MAX 6

// Função selection sort que ordena o vetor vet
void selection_sort(int vet[MAX]) {
    int i, j, indice_min, temp;

    // Loop externo: percorre todo o vetor
    for (i = 0; i < MAX - 1; i++) {
        // Encontra o índice do menor elemento restante
        indice_min = i;
        for (j = i + 1; j < MAX; j++) {
            if (vet[j] < vet[indice_min]) {
                indice_min = j;
            }
        }

        // Troca o menor elemento encontrado com o elemento na posição i
        temp = vet[indice_min];
        vet[indice_min] = vet[i];
        vet[i] = temp;
    }
}

// parte 2 pegar o vetor ordenado e convertê-lo em binário
int decimal_para_binario(int decimal) {
    int binario = 0;
    int multiplicador = 1;

    while (decimal > 0) {
        int resto = decimal % 2;
        binario += resto * multiplicador;
        decimal /= 2;
        multiplicador *= 10;
    }

    return binario;
}

//part 3 realizar a soma binária dos vetores
void soma_binaria(int A[], int B[], int n) {
    int carry = 0;
    int soma;
    int C[n + 1];  // precisa de n+1 posições   
    for (int i = 0; i < n; i++) {
        soma = A[i] + B[i] + carry;
        C[i] = soma % 2;
        carry = soma / 2;
    }
    C[n] = carry;
    // Imprime o resultado
    printf("A soma binária é: ");
    for (int i = n; i >= 0; i--) {
        printf("%d", C[i]);
    }
    printf("\n");
}    

int main() {
    // Inicialização do vetor
    int vet[MAX] = {5, 3, 6, 2, 1, 10};

    // Chamada da função de ordenação
    selection_sort(vet);

    // chamada da função de conversão para binário
    int vet_binario[MAX];
    for (int i = 0; i < MAX; i++) {
        vet_binario[i] = decimal_para_binario(vet[i]);
    }       
    // Impressão do vetor em binário
    printf("Vetor em binário: ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", vet_binario[i]);
    }
    printf("\n");

    // chamada da função de soma binária que pega os valores do vetor ordenado em binário
    // para isso precisamos separar os bits em vetores A e B
    int n = 4; // considerando números binários de até 4 bits
    int vetorA[n];
    int vetorB[n];  
    for (int i = 0; i < n; i++) {
        vetorA[i] = (vet_binario[i] / (int)pow(10, n - 1 - i)) % 10; // extrai o bit i do número
        vetorB[i] = (vet_binario[i + 2] / (int)pow(10, n - 1 - i)) % 10; // extrai o bit i do número
    }
    soma_binaria(vetorA, vetorB, n);    

        // Impressão do vetor ordenado
    printf("Vetor ordenado: ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
