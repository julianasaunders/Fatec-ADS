#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <cstdlib>
#include <iostream>
#include <ctype.h>
using namespace std;

struct TbProduto{
	
	int codigo;
	char nome[40];
	float valor;
	int qtd;
	int status;
};

struct TbProduto produto[10];
int posicao, continua;

void fInsereProduto(){
	
	printf("Informe um codigo para o produto: ");
	scanf("%i", &produto[posicao].codigo);
	getchar();
	
	printf("Informe o nome do produto: ");
	fgets(produto[posicao].nome, 40, stdin);
	produto[posicao].nome[strcspn(produto[posicao].nome, "\n")] = '\0';
	
	printf("Informe o valor do produto: ");
	scanf("%f", &produto[posicao].valor);
	
	printf("Informe a quantidade do produto: ");
	scanf("%i", &produto[posicao].qtd);
	
	produto[posicao].status = 1;
}

void fExibeProduto(){

	if(produto[posicao].status == 1){
		printf("\n--- INFORMACOES DO PRODUTO ---\n");
		printf("Codigo: %i \n", produto[posicao].codigo);
		printf("Nome: %s \n", produto[posicao].nome);
		printf("Valor: R$ %.2f \n", produto[posicao].valor);
		printf("Quantidade: %i \n", produto[posicao].qtd);
	} else {
		printf("\nEsta posicao esta vazia! Nenhum produto cadastrado aqui.\n");
	}
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    do {
        printf("Informe uma posicao para guardar o produto (1 a 10): ");
        scanf("%i", &posicao);
        
        posicao = posicao - 1;
        
        if (posicao >= 0 && posicao < 10) {
            fInsereProduto();
        } else {
            printf("\nPosicao invalida!\n");
        }
        
        printf("\nInforme 1 para continuar cadastrando: ");
        scanf("%i", &continua);
        
        system("cls");
        
    } while (continua == 1);
    
    system("cls");
    
    do {
        printf("Informe a posicao para consulta (1 a 10): ");
        scanf("%i", &posicao);
        
        posicao = posicao - 1;
        
        if (posicao >= 0 && posicao < 10) {
            fExibeProduto();
        } else {
            printf("\nPosicao invalida!\n");
        }
        
        printf("\nInforme 1 para continuar buscando: ");
        scanf("%i", &continua);
        
        system("cls");
        
    } while (continua == 1);
    
    system("pause");
    return 0;
}
