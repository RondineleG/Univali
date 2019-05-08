#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <iostream>
#include <stdio.h>

typedef struct  {
        char nome[256];
        long long cpf;
} Cliente;

typedef struct {
        long    numero_da_conta;
        long    cpf_do_cliente;
        double  saldo;
} Conta;

#define QUANTIDADE_DE_CLIENTES 3
#define OPERACAO_SAQUE 1
#define OPERACAO_DEPOSITO 2
typedef struct Contas
{
	 int diaDoMes;
	char descricao[200];
	char situacao[200];
	float valor;
	float valorTotal;
	float valorTotalPago;
	float valorTotalNaoPago;


} Contas;

Contas contasDiarias;

void menu();
void inicializar();
void imprimir();
void cadastrar();
void calculo();
int main()
{
	setlocale(LC_ALL, "portuguese");
	calculo();
	return 0;
} 

void contas()
{

	int opcao;
	do
	{
		puts("Opções: ");
		puts("[1] Mostrar Contas Pagas");
		puts("[2] Mostrar Contas Pagas");
		puts("[3] Mostrar Valor Total");
		puts("[4] Mostrar Valor Total");
		puts("Digite a opção desejada: ");
		scanf("%d%*c", &opcao);
		switch (opcao)
		{
		case 1:
			calculo();
			break;
		case 2:
			calculo();
			break;
		case 3:
			calculo();
			break;
		default:
			puts("Esta Opção não existente.");
			break;
		}
	} while (opcao != 5);
}

void menu()
{

	int opcao;
	do
	{
		puts("Opções: ");
		puts("[1] Mostrar Contas");
		puts("[2] Cadastrar Contas");
		puts("[3] Para sair");
		puts("Digite a opção desejada: ");
		scanf("%d%*c", &opcao);
		switch (opcao)
		{

		case 1:
			imprimir();
			break;
		case 2:
			cadastrar();
			break;
		case 3:
			puts("Fim Do Programa");
			break;
		case 4:
			calculo();
			break;
		default:
			puts("Esta Opção não existente.");
			break;
		}
	} while (opcao != 5);
}

void inicializar()
{

	contasDiarias.diaDoMes = 1;
	strcpy(contasDiarias.descricao, "NULL");
	strcpy(contasDiarias.situacao, "NULL");
	contasDiarias.valor = 0.0;
	contasDiarias.valorTotal = 0.0;
	contasDiarias.valorTotalPago = 0.0;
	contasDiarias.valorTotalNaoPago = 0.0;
}

void cadastrar()
{
	inicializar();
	puts("Digite o dia do mes: ");
	scanf("%d", &contasDiarias.diaDoMes);
	puts(" Digite uma descricao da Conta: ");
	scanf("%s", &contasDiarias.descricao);	
	puts(" Digite o valor da Conta: ");
	scanf("%f", &contasDiarias.valor);
	puts(" Digite o Status da  Conta : ");
	scanf("%s", &contasDiarias.situacao);
	imprimir();
}

void imprimir()
{   
   char respota;    
	printf(" \n O dia do mes é: %d ", contasDiarias.diaDoMes);
	printf(" \n A descricao da conta é: %s ", contasDiarias.descricao);
	printf(" \n O status da conta é: %s ", contasDiarias.situacao);
	printf(" \n O valor da conta é: %.2f ", contasDiarias.valor);
	printf(" \n \n");
	contas();
}

void calculo()
{   Contas contaDiarias;
	const int numeroDeDias = 5;
	const int numeroDeContasPorDia = 3;
	contasDiarias.diaDoMes = 1;
	strcpy(contasDiarias.descricao, "NULL");
	strcpy(contasDiarias.situacao, "NULL");
	contasDiarias.valor = 0.0;

	float contasDiarias[numeroDeContasPorDia][numeroDeDias];
	float valorTotal[numeroDeContasPorDia];

	float valor = 0;
	puts("-------------------------------------------------");
	puts("-------------------------------------------------");
	puts("Gerenciador Finaceiro");
	puts("-------------------------------------------------");

	puts("O Programa calcula ate 3 contas diarias");
	puts("Digite 0 se nao tiver ");
	puts("-------------------------------------------------");
	puts("-------------------------------------------------");

	for (int conta = 0; conta < numeroDeDias; ++conta)
	{

		printf("Insira as Contas do Dia %i:\n", conta + 1);
		puts("-------------------------------------------------");
		for (int dia = 0; dia < numeroDeContasPorDia; dia++)
		{	
		    printf("Qual O Valor Da Conta Numero %d : \nR$ ", dia + 1);
	        scanf("%d", &contaDiarias.diaDoMes);
	        puts("Digite uma descricao da Conta: ");
	        scanf("%s", &contaDiarias.descricao);	
	        puts("Digite o valor da Conta: ");
	        scanf("%f", &contaDiarias.valor);
	        puts("Digite o Status da  Conta : ");
	        scanf("%s", &contaDiarias.situacao);		
			printf("Contas");
			scanf("%f", &contasDiarias[conta][dia]);
			valor += contasDiarias[conta][dia];
			valorTotal[conta] = valor;
			puts("-------------------------------------------------");
		}
		     float contasDiarias = valor;	   
			printf("A soma total das contas ate o  dia %i e R$%.2f\n",conta + 1, contasDiarias);			
		    puts("-------------------------------------------------");
		    puts("-------------------------------------------------");
            puts("Digite o dia do mes: ");
	

   }  
}

	
