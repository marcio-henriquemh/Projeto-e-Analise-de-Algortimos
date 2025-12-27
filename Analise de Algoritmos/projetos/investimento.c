//usando algoritmo de potencia para um inveestimento simples
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <math.h>

// A função agora retorna o resultado do investimento (float) para melhor prática
float investimento_simples(int x, int n, float capital) {
    int i;
    // Inicialize p_cres_por_periodo com 1, pois é o elemento neutro da multiplicação
    float p_cres_por_periodo = 1.0;
    float resultado_inves;

    if (n == 0) {
        // Para qualquer x^0, o resultado é 1
        p_cres_por_periodo = 1.0;
    } else {
        // Inicialize o contador do loop
        i = 0;
        while (i < n) {
            p_cres_por_periodo = p_cres_por_periodo * x;
            i = i + 1;
        }
    }

    // Calcule o resultado final do investimento
    resultado_inves = capital * p_cres_por_periodo;

    // Imprima e retorne o resultado
    printf("Resultado do investimento é: %f\n", resultado_inves);
    return resultado_inves;
}

int main() {
    int crescimento, periodo;
    float cap; // Use float para o capital para maior precisão

    printf("Informe o valor do capital: ");
    // Use %f para ler um float
    scanf("%f", &cap);
    printf("Informe a taxa de crescimento x: ");
    scanf("%d", &crescimento);
    printf("Informe numero de periodo: ");
    scanf("%d", &periodo);

    // Chame a função; o valor retornado não precisa ser armazenado se já é impresso na função
    investimento_simples(crescimento, periodo, cap);

    return 0;
}
