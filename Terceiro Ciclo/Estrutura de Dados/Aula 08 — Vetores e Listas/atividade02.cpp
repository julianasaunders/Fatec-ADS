#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <cstdlib>
#include <iostream>
#include <ctype.h>
using namespace std;

char letra[13];
int posicao;

void Exibe(){
	for (posicao=0; posicao<13; posicao++){
		printf("Na posicao %i ", posicao);
		printf("esta a letra: %c \n", letra[posicao]);
	}
	
	system("pause");
}

void Ordena(){
	char troca;
	int qtdTrocas = 0;
	bool valida = false;
	posicao = 0;
	
	do{
		valida = false;
		for (posicao=0; posicao<12; posicao++){
			if (letra[posicao] > letra[posicao+1]){
				qtdTrocas++;
				troca = letra[posicao];
				letra[posicao] = letra[posicao+1];
				letra[posicao+1] = troca;
				valida = true;
			}
		}
	}
	while (valida == true);
	printf("\nQtd de trocas: %i\n", qtdTrocas);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	for (posicao=0; posicao<13; posicao++){
		printf("\nInforme a letra da posicao %i: ", posicao);
		fflush(stdin); // Limpa o buffer da entrada padrão (teclado)
		scanf("%c", &letra[posicao]);
	}
	
	system("pause");
	system("cls");
	
	printf("\n *** Exibe desordenado *** \n");
	Exibe();
	Ordena();
	printf("\n *** Exibe ordenado *** \n");
	Exibe();
	
	return 0;
}
