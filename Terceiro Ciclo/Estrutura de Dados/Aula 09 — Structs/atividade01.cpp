#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <cstdlib>
#include <iostream>
#include <ctype.h>
using namespace std;

struct TbFicha{
	int codigo;
	char nome[40];
	char bairro[40];
	char cidade[60];
	char telefone[10];
	char rg[15];
	char cpf[15];
};

struct TbFicha ficha[10];
int posicao, continua;

void insereCliente(){
	printf("Informe um codigo para o cliente: ");
	scanf("%i", &ficha[posicao].codigo);
	getchar();
	
	printf("Informe o nome do cliente: ");
	fgets(ficha[posicao].nome, 40, stdin);
	ficha[posicao].nome[strcspn(ficha[posicao].nome, "\n")] = '\0';
	
	printf("Informe o bairro do cliente: ");
	scanf("%s", ficha[posicao].bairro);
	
	printf("Informe a cidade do cliente: ");
	scanf("%s", ficha[posicao].cidade);
	
	printf("Informe o telefone: ");
	scanf("%s", ficha[posicao].telefone);
	
	printf("Informe o RG: ");
	scanf("%s", ficha[posicao].rg);
	
	printf("Informe o CPF: ");
	scanf("%s\n", ficha[posicao].cpf);
}

void exibeCliente(){
	printf("\nNa posicao digitada estao as informacoes: \n");
	printf("Codigo: %i \n", ficha[posicao].codigo);
	printf("Nome: %s \n", ficha[posicao].nome);
	printf("Bairro: %s \n", ficha[posicao].bairro);
	printf("Cidade: %s \n", ficha[posicao].cidade);
	printf("Telefone: %s\n", ficha[posicao].telefone);
	printf("RG: %s\n", ficha[posicao].rg);
	printf("CPF: %s\n", ficha[posicao].cpf);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    do {
        printf("Informe uma posicao para guardar o registro (1 a 10): ");
        scanf("%i", &posicao);

        posicao = posicao - 1; 

        if (posicao >= 0 && posicao < 10) {
            insereCliente();
        } else {
            printf("Posicao invalida!\n");
        }
        
        printf("Informe 1 para continuar cadastrando: ");
        scanf("%i", &continua);
        
        system("cls");
        
    } while (continua == 1);
    
    system("cls");
    
    printf("Informe a posicao para busca (1 a 10): ");
    scanf("%i", &posicao);

    posicao = posicao - 1; 
    
    if (posicao >= 0 && posicao < 10) {
        exibeCliente();
    } else {
        printf("Posicao invalida!\n");
    }
    
    system("pause");
    return 0;
}
