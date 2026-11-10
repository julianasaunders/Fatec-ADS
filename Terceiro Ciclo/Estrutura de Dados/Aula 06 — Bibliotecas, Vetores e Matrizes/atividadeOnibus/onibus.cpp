
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "onibus.h"

int fInsere(int *prioritarios, float *valorPassagem, int *minPartida) {
    int qtdLugares, totFileiras;
    
    printf("Digite a quantidade total de lugares: ");
    scanf("%i", &qtdLugares);
    
    printf("Digite a quantidade de lugares prioritarios: ");
    scanf("%i", prioritarios);
    
    printf("Digite o valor da passagem: ");
    scanf("%f", valorPassagem);
    
    printf("Digite o valor minimo de passagens para partir: ");
    scanf("%i", minPartida);
    
    totFileiras = qtdLugares / 4;
    
    return totFileiras;
}

void fInicializa(int onibus[50][4], int totFileiras) {
    int i, j;
    for (i = 0; i < totFileiras; i++) {
        for (j = 0; j < 4; j++) {
            onibus[i][j] = 0;
        }
    }
}

void fExibe(int onibus[50][4], int totFileiras, int ocupados, int totalLugares, float valorPassagem) {
    int i, j;
    int desocupados = totalLugares - ocupados;
    float percentual = ((float)ocupados / totalLugares) * 100;
    float faturamento = ocupados * valorPassagem;
    
    printf("\n--- MAPA DO ONIBUS ---\n");
    for (i = 0; i < totFileiras; i++) {
        for (j = 0; j < 4; j++) {
            printf("%i\t", onibus[i][j]);
        }
        printf("\n");
    }
    
    printf("\nNumero de lugares ocupados: %i\n", ocupados);
    printf("Numero de lugares desocupados: %i\n", desocupados);
    printf("Percentual de ocupacao: %.0f%%\n", percentual);
    printf("Valor total vendido em passagens: %.2f reais\n", faturamento);
    printf("-----------------------\n");
}

int fVenda(int onibus[50][4], int totFileiras) {
    int fileira, poltrona;
    
    printf("\n--- VENDA DE PASSAGEM ---\n");
    printf("Solicitar ao usuario a fileira desejada (1 a %i): ", totFileiras);
    scanf("%i", &fileira);
    printf("Solicitar ao usuario a poltrona desejada (1 a 4): ");
    scanf("%i", &poltrona);
    
    int f = fileira - 1;
    int p = poltrona - 1;
    
    if (f < 0 || f >= totFileiras || p < 0 || p >= 4) {
        printf("Assento invalido!\n");
        return 0;
    }
    
    if (onibus[f][p] == 0) {
        onibus[f][p] = 8;
        printf("Venda realizada com sucesso!\n");
        return 1;
    } else {
        printf("Indisponibilidade: o assento ja esta ocupado.\n");
        return 0;
    }
}

