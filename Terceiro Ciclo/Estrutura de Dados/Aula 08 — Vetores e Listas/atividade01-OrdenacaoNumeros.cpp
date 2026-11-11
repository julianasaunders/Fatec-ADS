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
	printf("\nQtd de trocas: %i", qtdTrocas);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	for (posicao=0; posicao<13; posicao++){
		printf("\nInforme o numero da posicao %i ", posicao);
		scanf("%i", &numero[posicao]);
	}
	
	system("pause");
	system("cls");
	
	printf("\n *** Exibe desordenado *** \n");
	Exibe();
	Ordena();
	printf("\n *** Exibe ordenado *** \n");
	Exibe();
}
