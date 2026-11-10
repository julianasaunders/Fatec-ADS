#include <stdio.h>
#include <stdlib.h>

void ftabuada(int num1) {
    int i, result;
    for (i = 1; i <= 10; i++) {
        result = num1 * i;
        printf("%d x %2d = %d\n", num1, i, result);
    }
}

void fcubo(int num2) {
    int i, result;

        result = num2 * num2 * num2;
        printf("O cubo de %2d e: %d\n", num2, result);
    
}

int main() {
    int num1;
    printf("Digite o primeiro numero (para tabuada): ");
    scanf("%i", &num1);
    
    ftabuada(num1);
    
    int num2;
    printf("Digite o segundo numero (para cubo): ");
    scanf("%i", &num2);
    
    fcubo(num2);

    system("pause");
    return 0;
}
