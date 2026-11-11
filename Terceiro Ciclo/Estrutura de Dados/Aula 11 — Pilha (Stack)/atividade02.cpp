#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <locale.h>

struct registro {
	int id;
	char nome[40];
	char rg[12];
	char cpf[12];
	char cidade[40];
	registro* ant;      
};

typedef registro* ponteiro;

// Função para exibir a Pilha (do topo para a base)
void exibePilha(ponteiro u){
	ponteiro aux;
	aux = u;

	printf("\n=== EXIBINDO A PILHA (LIFO) ===");
	while (aux != NULL){
		printf("\n-------------------------\n");
		printf("ID: %d\n", aux->id);
		printf("Nome: %s\n", aux->nome);
		printf("RG: %s\n", aux->rg);
		printf("CPF: %s\n", aux->cpf);
		printf("Cidade: %s\n", aux->cidade);
		aux = aux->ant;     
	}
}

// Função para exibir a Fila (do início para o fim)
void exibeFila(ponteiro inicio){
	ponteiro aux;
	aux = inicio;

	printf("\n=== EXIBINDO A FILA (FIFO) ===");
	while (aux != NULL){
		printf("\n-------------------------\n");
		printf("ID: %d\n", aux->id);
		printf("Nome: %s\n", aux->nome);
		printf("RG: %s\n", aux->rg);
		printf("CPF: %s\n", aux->cpf);
		printf("Cidade: %s\n", aux->cidade);
		aux = aux->ant;     
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	// Ponteiros da Pilha
	ponteiro ult = NULL;
	
	// Ponteiros da Fila (Início e Fim)
	ponteiro inicio = NULL;
	ponteiro fim = NULL;
	
	ponteiro aux;
	char resp = 'S';

	// ==================== CADASTRO DA PILHA ====================
	printf("--- CADASTRO DA PILHA ---\n");
	while (toupper(resp) == 'S'){
		aux = new registro;
		
		printf("\nInforme o ID do cliente (Pilha): \n");
		scanf("%d", &aux->id);

		printf("Informe o nome do cliente: \n");
		scanf("%s", aux->nome);

		printf("Informe o RG: \n");
		scanf("%s", aux->rg);

		printf("Informe o CPF: \n");
		scanf("%s", aux->cpf);

		printf("Informe a cidade: \n");
		scanf("%s", aux->cidade);

		aux->ant = NULL;
		
		if (ult != NULL){
			aux->ant = ult;
		}         
		
		ult = aux;
	  
		printf("Informe S para continuar na Pilha \n");
		fflush(stdin);
		scanf(" %c", &resp);         
	}

	// Reseta a resposta para cadastrar a fila
	resp = 'S';

	// ==================== CADASTRO DA FILA ====================
	printf("\n\n--- CADASTRO DA FILA ---\n");
	while (toupper(resp) == 'S'){
		aux = new registro;
		
		printf("\nInforme o ID do cliente (Fila): \n");
		scanf("%d", &aux->id);

		printf("Informe o nome do cliente: \n");
		scanf("%s", aux->nome);

		printf("Informe o RG: \n");
		scanf("%s", aux->rg);

		printf("Informe o CPF: \n");
		scanf("%s", aux->cpf);

		printf("Informe a cidade: \n");
		scanf("%s", aux->cidade);

		aux->ant = NULL;
		
		// Lógica de inserção no Fim da Fila
		if (inicio == NULL) {
			// Se a fila estiver vazia, o novo elemento é o primeiro e o último
			inicio = aux;
			fim = aux;
		} else {
			// Se já tiver elementos, o antigo fim aponta para o novo elemento
			fim->ant = aux;
			// Atualiza o ponteiro fim para o novo elemento
			fim = aux;
		}
	  
		printf("Informe S para continuar na Fila \n");
		fflush(stdin);
		scanf(" %c", &resp);         
	}

	// ==================== EXIBIÇÃO DOS DADOS ====================
	exibePilha(ult);
	exibeFila(inicio);  

	printf("\n");
	system("pause");  
}
