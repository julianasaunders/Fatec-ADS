#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <cstdlib>
#include <iostream>
#include <ctype.h>
using namespace std;

char time[12][30];
int pontos[12];
int gols[12];
int posicao;

void fInsere(){
	int i;
	
	for(i=0; i<12; i++){
		printf("\nDigite o nome do %iº time: ", i+1);
		fgets(time[i], sizeof(time[i]), stdin);
		time[i][strcspn(time[i], "\n")] = '\0';
		
		printf("Pontuação: ");
		scanf("%i", &pontos[i]);
		
		printf("Saldo de gols: ");
		scanf("%i", &gols[i]);
		
		getchar();
	}
}

void fExibe(){
	int i;
		
		for(i=0; i<12; i++){
			printf("TIME: %-15s |PONTUAÇÃO: %2i |GOLS: %2i\n", time[i], pontos[i], gols[i]);
			printf("\n");
		}
		
}

void fOrdena(){
	int trocaPontos, trocaGols;
	char trocaNome[30];
	bool valida = false;
	
	do{
		valida = false;
		for(posicao = 0; posicao < 11; posicao++){
			if(pontos[posicao] < pontos[posicao+1]){
				
				trocaPontos = pontos[posicao];
				pontos[posicao] = pontos[posicao+1];
				pontos[posicao+1] = trocaPontos;
				
				trocaGols = gols[posicao];
				gols[posicao] = gols[posicao+1];
				gols[posicao+1] = trocaGols;
				
				strcpy(trocaNome, time[posicao]);
				strcpy(time[posicao], time[posicao+1]);
				strcpy(time[posicao+1], trocaNome);
				
				valida = true;
			} else if(pontos[posicao] == pontos[posicao+1] && gols[posicao] < gols[posicao+1]){
				
				trocaPontos = pontos[posicao];
				pontos[posicao] = pontos[posicao+1];
				pontos[posicao+1] = trocaPontos;
				
				trocaGols = gols[posicao];
				gols[posicao] = gols[posicao+1];
				gols[posicao+1] = trocaGols;
				
				strcpy(trocaNome, time[posicao]);
				strcpy(time[posicao], time[posicao+1]);
				strcpy(time[posicao+1], trocaNome);
				
				valida = true;
			}
		}
	}
	while(valida == true);
}

void fClassifica(){
    printf("------- PÓDIO DO CAMPEONATO -------\n\n");
    printf(" 1º Lugar (Campeão): %s (Pontos: %i | Gols: %i)\n", time[0], pontos[0], gols[0]);
    printf(" 2º Lugar (Vice): %s (Pontos: %i | Gols: %i)\n", time[1], pontos[1], gols[1]);
    printf("\n-----------------------------------\n");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("------- FUTEBOL 2026 -------\n");
	
	fInsere();
	
	system("pause");
	system("cls");
	
	printf("------- TABELA DESORDENADA -------\n\n");
	fExibe();
	
	fOrdena();
	
	system("pause");
	system("cls");
	
	printf("------- TABELA ORDENADA -------\n\n");
	fExibe();
	
	system("pause");
	system("cls");
	
	fClassifica();
	
	system("pause");
	return 0;
}
