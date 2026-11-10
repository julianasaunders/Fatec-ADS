#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct TbFicha {
    int codigo;
    char nome[40];
    char bairro[40];
    char cidade[60];
    char telefone[15];
    char rg[15];
    char cpf[15];
};

struct TbProduto {
    int codigo;
    char nome[40];
    float valor;
    int qtd;
    int status;
};

struct TbVenda {
    int codigoVenda;
    int codigoCliente;
    int codigoProduto;
    int qtd;
    float total;
};

struct TbFicha ficha[10];
struct TbProduto produto[10];
struct TbVenda venda[100];

int totalClientes = 0;
int totalProdutos = 0;
int totalVendas = 0;

void listarClientes() {
    printf("\n+--------+----------------------------------------+\n");
    printf("| CODIGO | CLIENTE                                |\n");
    printf("+--------+----------------------------------------+\n");
    for (int i = 0; i < totalClientes; i++) {
        printf("| %-6d | %-38s |\n", ficha[i].codigo, ficha[i].nome);
    }
    printf("+--------+----------------------------------------+\n");
}

void listarProdutos() {
    printf("\n+--------+----------------------+-----------+---------+\n");
    printf("| CODIGO | PRODUTO              | PRECO R$  | ESTOQUE |\n");
    printf("+--------+----------------------+-----------+---------+\n");
    for (int i = 0; i < totalProdutos; i++) {
        if (produto[i].status == 1) {
            printf("| %-6d | %-20.20s | %9.2f | %7d |\n",
                   produto[i].codigo, produto[i].nome,
                   produto[i].valor, produto[i].qtd);
        }
    }
    printf("+--------+----------------------+-----------+---------+\n");
}

void cadastrarCliente() {
    if (totalClientes == 10) {
        printf("\nLimite de 10 clientes atingido!\n");
        return;
    }

    int i = totalClientes;
    printf("\n========== CADASTRO DE CLIENTE ==========\n");
    printf("Codigo do cliente: ");
    scanf("%d", &ficha[i].codigo);

    for (int j = 0; j < i; j++) {
        if (ficha[j].codigo == ficha[i].codigo) {
            printf("Este codigo ja esta cadastrado!\n");
            return;
        }
    }

    printf("Nome: ");
    scanf(" %39[^\n]", ficha[i].nome);
    printf("Bairro: ");
    scanf(" %39[^\n]", ficha[i].bairro);
    printf("Cidade: ");
    scanf(" %59[^\n]", ficha[i].cidade);
    printf("Telefone: ");
    scanf(" %14[^\n]", ficha[i].telefone);
    printf("RG: ");
    scanf(" %14[^\n]", ficha[i].rg);
    printf("CPF: ");
    scanf(" %14[^\n]", ficha[i].cpf);

    totalClientes++;
    printf("\nCliente cadastrado com sucesso!\n");
    listarClientes();
}

void cadastrarProduto() {
    if (totalProdutos == 10) {
        printf("\nLimite de 10 produtos atingido!\n");
        return;
    }

    int i = totalProdutos;
    char entrada[30];
    printf("\n========== CADASTRO DE PRODUTO ==========\n");
    printf("Codigo do produto: ");
    scanf("%d", &produto[i].codigo);

    for (int j = 0; j < i; j++) {
        if (produto[j].codigo == produto[i].codigo) {
            printf("Este codigo ja esta cadastrado!\n");
            return;
        }
    }

    printf("Nome do produto: ");
    scanf(" %39[^\n]", produto[i].nome);

    printf("Preco do produto: ");
    scanf("%29s", entrada);
    for (int j = 0; entrada[j] != '\0'; j++) {
        if (entrada[j] == ',')
            entrada[j] = '.';
    }
    if (sscanf(entrada, "%f", &produto[i].valor) != 1 || produto[i].valor <= 0) {
        printf("Preco invalido. Cadastro cancelado!\n");
        return;
    }

    printf("Quantidade em estoque: ");
    scanf("%d", &produto[i].qtd);
    if (produto[i].qtd < 0) {
        printf("Quantidade invalida. Cadastro cancelado!\n");
        return;
    }

    produto[i].status = 1;
    totalProdutos++;
    printf("\nProduto cadastrado com sucesso!\n");
    listarProdutos();
}

void realizarVenda() {
    if (totalClientes == 0 || totalProdutos == 0) {
        printf("\nCadastre pelo menos um cliente e um produto primeiro!\n");
        return;
    }
    if (totalVendas == 100) {
        printf("\nLimite de vendas atingido!\n");
        return;
    }

    printf("\n================ REALIZAR VENDA ================\n");
    printf("\nCLIENTES CADASTRADOS:");
    listarClientes();
    printf("\nPRODUTOS CADASTRADOS:");
    listarProdutos();

    int codigoCliente, codigoProduto, quantidade, codigoVendaInput;
    int posCliente = -1, posProduto = -1;
    char confirmar;

    printf("\nInforme um codigo para a venda: ");
    scanf("%d", &codigoVendaInput);

    printf("Informe o codigo do cliente: ");
    scanf("%d", &codigoCliente);
    for (int i = 0; i < totalClientes; i++) {
        if (ficha[i].codigo == codigoCliente)
            posCliente = i;
    }
    if (posCliente == -1) {
        printf("Cliente nao encontrado!\n");
        return;
    }

    printf("Informe o codigo do produto: ");
    scanf("%d", &codigoProduto);
    for (int i = 0; i < totalProdutos; i++) {
        if (produto[i].codigo == codigoProduto)
            posProduto = i;
    }
    if (posProduto == -1) {
        printf("Produto nao encontrado!\n");
        return;
    }

    printf("Informe a quantidade do produto: ");
    scanf("%d", &quantidade);
    if (quantidade <= 0 || quantidade > produto[posProduto].qtd) {
        printf("Quantidade invalida! Estoque disponivel: %d\n", produto[posProduto].qtd);
        return;
    }

    float total = quantidade * produto[posProduto].valor;
    printf("\n---------------- RESUMO DA VENDA ----------------\n");
    printf("Codigo da Venda: %d\n", codigoVendaInput);
    printf("Cliente: %s (Cidade: %s)\n", ficha[posCliente].nome, ficha[posCliente].cidade);
    printf("Produto: %s\n", produto[posProduto].nome);
    printf("Quantidade: %d\n", quantidade);
    printf("Valor Total: R$ %.2f\n", total);
    printf("Confirmar venda (S/N)? ");
    scanf(" %c", &confirmar);

    if (confirmar != 'S' && confirmar != 's') {
        printf("Venda cancelada.\n");
        return;
    }

    venda[totalVendas].codigoVenda = codigoVendaInput;
    venda[totalVendas].codigoCliente = codigoCliente;
    venda[totalVendas].codigoProduto = codigoProduto;
    venda[totalVendas].qtd = quantidade;
    venda[totalVendas].total = total;
    totalVendas++;

    produto[posProduto].qtd -= quantidade;
    printf("\nVENDA REALIZADA COM SUCESSO!\n");
    printf("Estoque restante de %s: %d\n", produto[posProduto].nome, produto[posProduto].qtd);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int op;
    do {
        printf("\n===========================================\n");
        printf("             SISTEMA DE VENDAS             \n");
        printf("===========================================\n");
        printf("  [1] Cadastrar cliente\n");
        printf("  [2] Cadastrar produto\n");
        printf("  [3] Realizar venda e exibir\n");
        printf("  [0] Sair\n");
        printf("-------------------------------------------\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &op) != 1) {
            printf("Digite apenas numeros no menu.\n");
            break;
        }

        switch (op) {
        case 1:
            cadastrarCliente();
            break;
        case 2:
            cadastrarProduto();
            break;
        case 3:
            realizarVenda();
            break;
        case 0:
            printf("Programa encerrado.\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (op != 0);
    return 0;
}
