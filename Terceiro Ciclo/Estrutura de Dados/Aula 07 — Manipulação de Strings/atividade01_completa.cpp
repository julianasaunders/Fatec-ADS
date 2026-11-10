#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <cstdlib>
#include <iostream>
#include <ctype.h>
using namespace std;

char frase[100];

int fInsere(){
	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	frase[strcspn(frase, "\n")] = '\0';
}

void fContagemCaracteres(char frase[]) {
    int i, contador = 0;
    
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            contador++;
        }
    }
    
    printf("Quantidade de caracteres: %i.\n", contador);
}

void fContagemVogaisConsoantes(char frase[]){
	int i, vogais = 0, consoantes = 0;
	
	for (i = 0; frase[i] != '\0'; i++){
		if (frase[i] != ' '){
			char c = tolower(frase[i]);
			
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        	vogais++;
        } else {
            consoantes++;
        }
    }
}
    
    printf("Quantidade de vogais: %i.\n", vogais);
    printf("Quantidade de consoantes: %i.\n", consoantes);
}

void fContagemPalavras(char frase[]){
    int i, palavras = 0;
    
    for (i = 0; frase[i] != '\0'; i++){
        if (frase[i] != ' ' && (i == 0 || frase[i - 1] == ' ')){
            palavras++;
        }
    }
    
    printf("Quantidade de palavras: %i.\n", palavras);
}

void fConcatenacao(char frase[]){
	char fraseConcat[100];

    strcpy(fraseConcat, frase);
    
    strcat(fraseConcat, " chuva não");
    
    printf("A frase concatenada fica: %s\n", fraseConcat);
}

void fSubstitui(char frase[]){
	char fraseAlterada[100];
	int i;
	
	strcpy(fraseAlterada, frase);
	
	for (i = 0; fraseAlterada[i] != '\0'; i++) {
	    char c = tolower(fraseAlterada[i]); 
	    
	    if (c == 'a' || c == 'i') {
	        fraseAlterada[i] = 'b';
	    } else if (c == 'e' || c == 'o' || c == 'u') {
	        fraseAlterada[i] = '3';
	    }
	}
	
	printf("A frase com as vogais alteradas fica: %s\n", fraseAlterada);
}

void fCifrar(char frase[]){
	char fraseCifrada[100];
	int i;
	
	strcpy(fraseCifrada, frase);
	
	for (i = 0; fraseCifrada[i] != '\0'; i++){
		if (i < 5){
			fraseCifrada[i] = fraseCifrada[i] + 3;
		} else {
			fraseCifrada[i] = fraseCifrada[i] - 5;
		}
	}
	
	printf("A frase cifrada ficou: %s\n", fraseCifrada);
}

void fResumoFinal(char frase[]){
	printf("\n--- RESUMO FINAL ---\n");
	
	printf("Frase original: %s\n", frase);
	
	fConcatenacao(frase);
	
	fSubstitui(frase);
	
	fCifrar(frase);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	fInsere();
	
	fContagemCaracteres(frase);
	
	fContagemVogaisConsoantes(frase);
	
	fContagemPalavras(frase);
	
	fConcatenacao(frase);
	
	fSubstitui(frase);
	
	fCifrar(frase);
	
	system("pause");
	system("cls");
	
	fResumoFinal(frase);
	
	return 0;
}
