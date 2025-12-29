#include <stdio.h>
#include <stdlib.h>

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

int main() {
    // Inicialização do vetor
    int vet[MAX] = {5, 3, 6, 2, 1, 4};

    // Chamada da função de ordenação
    selection_sort(vet);

    // Impressão do vetor ordenado
    printf("Vetor ordenado: ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
