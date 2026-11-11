#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <cstdlib>
#include <iostream>
#include <ctype.h>
using namespace std;

int numero[13];
int posicao;

void Exibe(){
	for (posicao=0; posicao<13; posicao++){
		printf("Na posicao %i ", posicao);
		printf(" esta o numero: %i \n", numero[posicao]);
	}
	system("pause");
}

void Ordena(){
	int troca, qtdTrocas=0;
	bool valida=false;
	posicao=0;
	
	do{
		valida=false;
		for (posicao=0; posicao<12; posicao++){
			if (numero[posicao]>numero[posicao+1]){
				qtdTrocas++;
				troca = numero[posicao];
				numero[posicao] = numero[posicao+1];
				numero[posicao+1] = troca;
				valida=true;
			}
		}
	}
	while (valida == true);
	printf("\nQtd de trocas: %i\n", qtdTrocas);
}

void busca(int buscaNum){
	bool achou=false;
	int inicio, meio, fim;
	
	inicio = 0;
	fim = 13-1;
	meio = (inicio+fim) / 2;
	
	while (inicio <= fim && achou==false){
		meio = (inicio+fim) / 2;
		if (buscaNum > numero[meio]){
			inicio = meio+1;
		} else if (buscaNum < numero[meio]){
			fim = meio-1;
		} else {
			achou = true;
		}
	}
	
	printf("\nMeio: %i\n", meio);
	printf("Inicio: %i\n", inicio);
	printf("Fim: %i\n", fim);
	
	if (achou==true){
		printf("\n *** Informacao encontrada na posicao %i *** \n", meio);
	} else {
		printf("\n *** Informacao nao encontrada *** \n");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numBusca;
	
	for (posicao=0; posicao<13; posicao++){
		printf("Informe o numero da posicao %i: ", posicao);
		scanf("%i", &numero[posicao]);
	}
	
	system("pause");
	system("cls");
	
	printf("\n *** Exibe desordenado *** \n");
	Exibe();
	
	Ordena();
	
	printf("\n *** Exibe ordenado *** \n");
	Exibe();
	
	system("cls");
	
	printf("\nDigite o numero que deseja buscar: ");
	scanf("%i", &numBusca);
	
	busca(numBusca);
	
	return 0;
}
