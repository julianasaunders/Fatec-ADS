#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void fvenda(int n, int codigo[], char nome[][30], float valor[], int estoque[]){
	int i, achou, cod_digitado, qtd_digitada, carrinho_cod[50], carrinho_qtd[50], tot_vendas = 0;
	int j, k, continuar;
	float total_compra = 0;
	
	do{
		printf("\n\nDigite o codigo do produto desejado: ");
    	scanf("%i", &cod_digitado);
    	
    achou = 0;	
    for(i=0; i<n; i++){
	
		if(cod_digitado == codigo[i]){
			achou = 1;
			printf("\nCodigo: %i\tProduto: %s\tValor: %.2f\tEstoque: %i\n", codigo[i], nome[i], valor[i], estoque[i]);
			printf("\n--------------------------------\n");
			printf("\nDigite a quantidade desejada do produto: ");
			scanf("%i", &qtd_digitada);
			
			if(qtd_digitada <= estoque[i]){
				carrinho_cod[tot_vendas] = cod_digitado;
				carrinho_qtd[tot_vendas] = qtd_digitada;
				estoque[i] = estoque[i] - qtd_digitada;
				tot_vendas++;
			} else {
				printf("\nQuantidade não existe em estoque.\n");
				printf("\n--------------------------------\n");
			}
			break; 
		}

	}
	
	if(achou == 0){
		printf("\nProduto não encontrado.\n");
		printf("\n--------------------------------\n");
	}
	
	printf("\nDeseja inserir mais produtos? (1-Sim/2-Não) - ");
	scanf("%d", &continuar);
	printf("\n--------------------------------\n");
	} while(continuar == 1);
	
    printf("\n\nResumo da compra:\n");
    printf("\nProduto\t\tQuantidade\tValor Unit.\tSubtotal\n");

    for(k = 0; k < tot_vendas; k++) {
        for(j = 0; j < n; j++) {
            if(carrinho_cod[k] == codigo[j]) {
                float subtotal = carrinho_qtd[k] * valor[j];
                total_compra += subtotal;

                printf("%s\t\t%d\tR$ %.2f\t\tR$ %.2f\n", nome[j], carrinho_qtd[k], valor[j], subtotal);
                break;
            }
        }
    }

	printf("\n--------------------------------\n");
    printf("\n\nVALOR TOTAL DA COMPRA: R$ %.2f\n", total_compra);

}


void fbuscar(int n, int codigo[], char nome[][30], float valor[], int estoque[]){
	int i, busca_cod, achou, continuar;
	
	do{
		printf("\n\nConsulta codigo: ");
    	scanf("%i", &busca_cod);
    achou = 0;	
    for(i=0; i<n; i++){
	
		if(busca_cod == codigo[i]){
			achou = 1;
			printf("\nCodigo: %i\tProduto: %s\tValor: %.2f\tEstoque: %i\n", codigo[i], nome[i], valor[i], estoque[i]);
			printf("\n--------------------------------\n");
			break;		
		} 
	}
	
	if(achou == 0){
		printf("\nProduto não encontrado.\n");
		printf("\n--------------------------------\n");
	}
	
		printf("\nDeseja consultar mais algum produto? (1-Sim/2-Não) - ");
		scanf("%d", &continuar);
		printf("\n--------------------------------\n");
	} while(continuar == 1);
}



void fexibir(int n, int codigo[], char nome[][30], float valor[], int estoque[]){
	int i;
	
		printf("\nCodigo\tProduto\tValor\tEstoque\n");
	
	for(i=0; i<n; i++){
	
		printf("%i\t", codigo[i]);
		printf("%s\t", nome[i]);
		printf("%.2f\t", valor[i]);
		printf("%i\t", estoque[i]);
		printf("\n");
	}
	printf("\n--------------------------------\n");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int n, i;

    int codigo[50];
    char nome[50][30];  // Guarda ate 50 palavras, com ate 29 letras cada
    float valor[50];
    int estoque[50];

    	printf("Quantos produtos deseja cadastrar? ");
    	scanf("%d", &n);
    	printf("\n--------------------------------\n");
    
    for(i=0; i<n; i++){
    	
    	printf("\n\nCodigo do produto: ");
    		scanf("%i", &codigo[i]);
		printf("\nNome do produto: ");
    		scanf("%s", nome[i]);
    			getchar();
    	printf("\nValor do produto: ");
    		scanf("%f", &valor[i]);
    	printf("\nQuantidade desse produto em estoque: ");
   			scanf("%i", &estoque[i]);
   		printf("\n--------------------------------\n");
    	
	}
	
	fexibir(n, codigo, nome, valor, estoque);
	
	fbuscar(n, codigo, nome, valor, estoque);
	
	fvenda(n, codigo, nome, valor, estoque);

    return 0;
}
