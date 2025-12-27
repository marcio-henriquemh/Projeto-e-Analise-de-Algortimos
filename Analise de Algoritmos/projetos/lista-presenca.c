
//busca linear para lista de presenca
#include <stdio.h>
#include <stdlib.h>
#define MAX 5


int busca_aluno(int vet_alunos[MAX], int presente) {
    int indice = 0;

    while (indice < MAX) {
        if (vet_alunos[indice] == presente) {
            printf("O aluno esta presente na posicao %d\n", indice);
            return indice; // retorna a posição onde achou
        }
        indice = indice + 1;
    }
    // Se chegou aqui, não encontrou
    printf("Aluno nao encontrado.\n");
    return -1;
}

int main() {
    int vetor_alunos[MAX], presente;

    for (int indice = 0; indice < MAX; indice++) {
        printf("Informe o numero do aluno: ");
        scanf("%d", &vetor_alunos[indice]);
    }

    printf("Qual aluno voce quer encontrar: ");
    scanf("%d", &presente);

    busca_aluno(vetor_alunos, presente);

    return 0;
}