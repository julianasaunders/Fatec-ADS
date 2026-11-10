#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "onibus.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int onibus[50][4], totFileiras, lugaresPrioritarios, lugaresOcupados = 0, minPassagensPartida, totalLugares, opcao = 1;
    float valorPassagem;
    
    totFileiras = fInsere(&lugaresPrioritarios, &valorPassagem, &minPassagensPartida);
    totalLugares = totFileiras * 4;
    
    fInicializa(onibus, totFileiras);
    
    while (opcao != 0) {
        fExibe(onibus, totFileiras, lugaresOcupados, totalLugares, valorPassagem);
        
        printf("\n--- MENU DE OPCOES ---\n");
        printf("1. Efetuar nova venda de passagem\n");
        printf("0. Encerrar o sistema\n");
        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);
        
        if (opcao == 1) {

            if (fVenda(onibus, totFileiras) == 1) {
                lugaresOcupados++;
            }
        } else if (opcao == 0) {
            printf("\nEncerrando o sistema de vendas...\n");
            
            if (lugaresOcupados >= minPassagensPartida) {
            	fExibe(onibus, totFileiras, lugaresOcupados, totalLugares, valorPassagem);
                printf("Status do Onibus: Liberado para partida! O minimo era %i e foram vendidas %i.\n", minPassagensPartida, lugaresOcupados);
            } else {
            	fExibe(onibus, totFileiras, lugaresOcupados, totalLugares, valorPassagem);
                printf("Status do Onibus: Retido! Nao atingiu o valor minimo de %i passagens vendidas (Vendas: %i).\n", minPassagensPartida, lugaresOcupados);
            }
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }
    
    return 0;
}


