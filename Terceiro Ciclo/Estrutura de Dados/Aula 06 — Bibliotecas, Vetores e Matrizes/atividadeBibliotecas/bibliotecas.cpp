#include <stdio.h>
#include <stdlib.h>
#include "variaveis.h"
#include "soma.h"
#include "div.h"
#include "mult.h"
#include "sub.h"
#include "cubo.h"

int main(){
	
	//printf("Informe o codigo: ");
	//scanf("%i", &codigo);
	//printf("Informe o valor: ");
	//scanf("%i", &valor);
	//printf("\n%i %i\n", codigo, valor);
	
	printf("\nA soma e: %i.\n", fSoma(10, 10));
	
	printf("\nA divisao e: %i.\n", fDiv(10, 10));
		
	printf("\nA multiplicacao e: %i.\n", fMult(10, 10));
			
	printf("\nA subtracao e: %i.\n", fSub(10, 10));
	
	printf("\nO cubo e: %i.\n", fCubo(10, 10));
	
	return 0;
}
