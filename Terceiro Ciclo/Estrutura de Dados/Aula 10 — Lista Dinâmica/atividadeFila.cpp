#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <iostream>

using namespace std;

// Struct estruturada com os campos pedidos e o ponteiro para o próximo (Fila Dinâmica)
struct TbFicha {
    int codigo;
    char nome[40];
    char bairro[40];
    char cidade[60];
    char telefone[15];
    char rg[15];
    char cpf[15];
    struct TbFicha *proximo; // Ponteiro para encadear a fila
};

// Ponteiros globais para o início e o fim da fila
TbFicha *inicio = NULL;
TbFicha *fim = NULL;

void insereCliente() {
    // Alocação dinâmica de memória com 'new' conforme a orientação da atividade
    TbFicha *novo = new TbFicha;

    printf("\n========== CADASTRO DE CLIENTE (FILA) ==========\n");
    printf("Informe o codigo do cliente: ");
    scanf("%d", &novo->codigo);
    getchar(); // Limpa o buffer do teclado

    printf("Informe o nome do cliente: ");
    scanf(" %39[^\n]", novo->nome);
    
    printf("Informe o bairro do cliente: ");
    scanf(" %39[^\n]", novo->bairro);
    
    printf("Informe a cidade do cliente: ");
    scanf(" %59[^\n]", novo->cidade);
    
    printf("Informe o telefone: ");
    scanf(" %14[^\n]", novo->telefone);
    
    printf("Informe o RG: ");
    scanf(" %14[^\n]", novo->rg);
    
    printf("Informe o CPF: ");
    scanf(" %14[^\n]", novo->cpf);

    novo->proximo = NULL;

    // Lógica da Fila: o elemento entra sempre no final
    if (inicio == NULL) {
        inicio = novo;
        fim = novo;
    } else {
        fim->proximo = novo;
        fim = novo;
    }

    printf("\nCliente inserido na fila com sucesso!\n");
}

void exibeCliente() {
    if (inicio == NULL) {
        printf("\nA fila esta vazia!\n");
        return;
    }

    TbFicha *atual = inicio;
    printf("\n================ EXIBINDO A FILA DE CLIENTES ================\n");
    while (atual != NULL) {
        printf("Codigo: %d | Nome: %s | CPF: %s | RG: %s | Cidade: %s\n", 
               atual->codigo, atual->nome, atual->cpf, atual->rg, atual->cidade);
        atual = atual->proximo;
    }
    printf("-------------------------------------------------------------\n");
}

void removerPrimeiroDaFila() {
    if (inicio == NULL) {
        printf("\nA fila ja esta vazia! Nao ha registros para apagar.\n");
        return;
    }

    TbFicha *temp = inicio; // Guarda o primeiro registro temporariamente
    printf("\nRemovendo o primeiro registro: %s\n", temp->nome);

    inicio = inicio->proximo; // O início passa a ser o segundo elemento

    if (inicio == NULL) {
        fim = NULL; // Se a fila esvaziou totalmente, o fim também fica nulo
    }

    delete temp; // Libera a memória RAM alocada com 'new'
    printf("Primeiro registro apagado com sucesso!\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int op;

    do {
        printf("\n===========================================\n");
        printf("       SISTEMA DE FILA DINAMICA (Ficha)    \n");
        printf("===========================================\n");
        printf("  [1] Inserir cliente na fila\n");
        printf("  [2] Exibir fila de clientes\n");
        printf("  [3] Apagar o primeiro registro\n");
        printf("  [0] Sair\n");
        printf("-------------------------------------------\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &op) != 1) {
            printf("Digite apenas numeros.\n");
            break;
        }

        switch (op) {
        case 1:
            insereCliente();
            exibeCliente(); // Instrução: "Exibir depois de inserido"
            break;
        case 2:
            exibeCliente();
            break;
        case 3:
            removerPrimeiroDaFila();
            exibeCliente(); // Exibe todos os registros novamente após remover
            break;
        case 0:
            printf("Encerrando programa.\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (op != 0);

    return 0;
}
