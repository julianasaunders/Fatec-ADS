#include <stdio.h>
#include <stdlib.h>

int fcubo(int resultado){
	int resultCubo = resultado * resultado * resultado;
	printf("O resultado final (cubo) e: %i.\n", resultCubo);
	return resultCubo;
}

int fmult(int resultado, int n3){
	int total = (resultado + n3) * 3;
	printf("A multiplicacao e: %i.\n", total);
	return total;
}

int fsoma(int num1, int num2, int num3){
	int result = (num1 + num2) + 10;
	printf("\nA soma e: %i.\n", result);
	return result;
}

int main() {
	int n1, n2, n3;
	float resultado;
	printf("Informe o primeiro numero: ");
	scanf("%i", &n1);
	printf("Informe o segundo numero: ");
	scanf("%i", &n2);
	printf("Informe o terceiro numero: ");
	scanf("%i", &n3);
	
	resultado = (fsoma(n1, n2, n3));

	resultado = (fmult(resultado, n3));
	
	resultado = (fcubo(resultado));
    
	system("pause");
	//return 0; retorna para o sistema operacional que aquele espaço de memória não está sendo mais usado
    return 0;
}
