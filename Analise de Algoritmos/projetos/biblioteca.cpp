
// implementação de biblioteca simples usando os algoritmos de soma,insertion sort, busca linear, potenciação c++
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define MAX 5

//definição da classe biblioteca
struct Biblioteca {
    char nome[50];
    int numero_de_paginas;
    int ano_de_publicacao;
    int isbn_id;
};

// Variáveis globais para armazenar os livros e o contador de IDs
struct Biblioteca livros[MAX];
int contador_livros = 0; // Controla o número atual de livros armazenados
int proximo_id = 1;      // Controla o próximo ID único a ser atribuído

// Função para adicionar um novo livro
void adicionar_livro(const char* nome, int paginas, int ano) {
    if (contador_livros < MAX) {
        // Atribui o próximo ID único
        livros[contador_livros].isbn_id = proximo_id;
        // Copia os outros dados
        strncpy(livros[contador_livros].nome, nome, 99);
        livros[contador_livros].numero_de_paginas = paginas;
        livros[contador_livros].ano_de_publicacao = ano;

        contador_livros++; // Incrementa o contador de livros
        proximo_id++;      // Incrementa o ID para o próximo livro
        printf("Livro \"%s\" adicionado com ID %d.\n", nome, livros[contador_livros - 1].isbn_id);
    } else {
        printf("A biblioteca está cheia. Não é possível adicionar mais livros.\n");
    }
}


//funcao para listar livros
void listar_livros() {
    if (contador_livros == 0) {
        printf("Nenhum livro na biblioteca.\n");
        return;
    }

    // Insertion Sort para ordenar livros por ID 
    int i, j;
    struct Biblioteca chave;

    for (i = 1; i < contador_livros; i++) {
        chave = livros[i];
        j = i - 1;

        /* Move os elementos de livros[0..i-1], que são maiores que a chave, 
           uma posição à frente de sua posição atual */
        while (j >= 0 && livros[j].isbn_id > chave.isbn_id) {
            livros[j + 1] = livros[j];
            j = j - 1;
        }
        livros[j + 1] = chave;
    }
   
    printf("Lista de livros na biblioteca:\n");
    for (i = 0; i < contador_livros; i++) {
        printf("ID: %d, Nome: %s, Paginas: %d, Ano: %d\n", 
               livros[i].isbn_id, livros[i].nome, 
               livros[i].numero_de_paginas, livros[i].ano_de_publicacao);
    }
}

//busca linear
void buscar_livros(){
    int id_procurado;
    printf("Digite o ID do livro a ser buscado: ");
    scanf("%d", &id_procurado);

    for (int i = 0; i < contador_livros; i++) {
        if (livros[i].isbn_id == id_procurado) {
            printf("Livro encontrado:\n");
            printf("ID: %d, Nome: %s, Paginas: %d, Ano: %d\n", 
                   livros[i].isbn_id, livros[i].nome, 
                   livros[i].numero_de_paginas, livros[i].ano_de_publicacao);
            return;
        }
    }
    printf("Livro com ID %d nao encontrado.\n", id_procurado);
}

//calculo de multas (exemplo simples)
float calcular_multa(int dias_atraso) {
    const float taxa_diaria = 0.50; // Exemplo: R$0,50 por dia de atraso
    return dias_atraso * taxa_diaria;
}

//crescimento anual do acervo (exemplo simples)
void crescimento_anual(int livros_ano_passado, int livros_ano_atual) {
    if (livros_ano_passado == 0) {
        printf("Crescimento anual: N/A (ano passado tinha 0 livros)\n");
        return;
    }
    float crescimento = ((float)(livros_ano_atual - livros_ano_passado) / livros_ano_passado) * 100;
    printf("Crescimento anual do acervo: %.2f%%\n", crescimento);
}   


int main(){


//menur de opções
int opcao;  
do {
    printf("Menu de opcoes:\n");
    printf("1. Adicionar livro\n");
    printf("2. Listar livros\n");
    printf("3. Buscar livro\n");
    printf("4. Total de multas\n");
    printf("5. Crescimento anual\n");
    printf("6. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // código para adicionar livro
            printf("Funcao de adicionar livro ainda nao implementada.\n");
            char nome[100];
            int paginas, ano;
            printf("Digite o nome do livro: ");
            scanf("%s", nome);
            printf("Digite o numero de paginas: ");
            scanf("%d", &paginas);
            printf("Digite o ano de publicacao: ");
            scanf("%d", &ano);
            adicionar_livro(nome, paginas, ano);

            break;
        case 2:
            // código para listar livros
            printf("Funcao de listar livros ainda nao implementada.\n");
            listar_livros();


            break;
        case 3:
            // código para buscar livro
            printf("Funcao de buscar livro ainda nao implementada.\n");
            buscar_livros();
            break;

        case 4:
            // código para calcular total de multas
            printf("Funcao de calcular multas ainda nao implementada.\n");
            calcular_multa(0); // Exemplo de chamada
            break;
        case 5:
            // código para calcular crescimento anual
            printf("Funcao de calcular crescimento anual ainda nao implementada.\n");
            crescimento_anual(0, 0); // Exemplo de chamada
            break;
        case 6:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
    }


} while (opcao != 6);
    return 0;
}