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


void exibePilha(ponteiro u){
	ponteiro aux;
	aux = u;

	printf("PILHA (LIFO):\n");
	
	while (aux != NULL){
		printf("\nID: %d\n", aux->id);
		printf("Nome: %s\n", aux->nome);
		printf("RG: %s\n", aux->rg);
		printf("CPF: %s\n", aux->cpf);
		printf("Cidade: %s\n", aux->cidade);
		printf("---------------------\n");
		aux = aux->ant;     	
	}
}

void exibeFila(ponteiro inicio){
	ponteiro aux;
	aux = inicio;

	printf("\nFILA (FIFO):\n");
	
	while (aux != NULL){
		printf("\nID: %d\n", aux->id);
		printf("Nome: %s\n", aux->nome);
		printf("RG: %s\n", aux->rg);
		printf("CPF: %s\n", aux->cpf);
		printf("Cidade: %s\n", aux->cidade);
		printf("---------------------\n");
		aux = aux->ant;     	
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	ponteiro ult = NULL;
	
	ponteiro inicio = NULL;
	ponteiro fim = NULL;
	
	ponteiro aux;
	char resp = 'S';


	printf("--- CADASTRO DA PILHA ---\n");
	
	while (toupper(resp) == 'S'){
		aux = new registro;
		
		printf("\nInforme o ID do cliente: \n");
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
	  
		printf("Deseja continuar na Pilha? (S/N): \n");
		fflush(stdin);
		scanf(" %c", &resp);         
	}

	resp = 'S';

	printf("\n\n--- CADASTRO DA FILA ---\n");
	while (toupper(resp) == 'S'){
		aux = new registro;
		
		printf("\nInforme o ID do cliente: \n");
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
		
		if (inicio == NULL) {
			inicio = aux;
			fim = aux;
		} else {
			fim->ant = aux;
			fim = aux;
		}
	  
		printf("Deseja continuar na Fila? (S/N): \n");
		fflush(stdin);
		scanf(" %c", &resp);         
	}
	
	system("cls");
	
	exibePilha(ult);
	exibeFila(inicio);  

	printf("\n");
	system("pause");  
}
