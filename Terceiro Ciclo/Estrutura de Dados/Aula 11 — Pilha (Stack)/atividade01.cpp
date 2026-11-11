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

void exibe(ponteiro u){
	ponteiro aux;
	aux = u;

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

	ponteiro ult, aux;
	char resp = 'S';

	ult = NULL;
	aux = NULL;

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
	  
		printf("Informe S para continuar \n");
		fflush(stdin);
		scanf(" %c", &resp);         
	}

	aux = ult;
	exibe(ult);  
	system("pause");  
}
