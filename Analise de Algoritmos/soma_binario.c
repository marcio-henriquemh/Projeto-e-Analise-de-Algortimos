#include <stdio.h>

// Soma binária de dois vetores A e B
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
    int n;

    printf("Digite o tamanho dos vetores binários: ");
    scanf("%d", &n);

    int vetorA[n];
    int vetorB[n];

    printf("Digite os elementos do vetor A (0 ou 1):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os elementos do vetor B (0 ou 1):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorB[i]);
    }

    soma_binaria(vetorA, vetorB, n);

    return 0;
}
