#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Contas
{
    int diaDoMes;
    char descricao[200];
    char situacao[200];
    float valor;
} Contas;

Contas contasDiarias;

void menu();
void inicializar();
void imprimir();
void cadastrar();

int main()
{
    setlocale(LC_ALL,"portuguese");
    inicializar();
	menu();
    return 0;
}

void menu()
{
	
    int opcao;
    do
    {
        puts("Opções: ");       
        puts("[1] Mostrar Contas" );
        puts("[2] Cadastrar Contas" );
        puts("[3] Para sair" );
        puts("Digite a opção desejada: ");
        scanf("%d%*c", &opcao);
        switch(opcao)
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
            default:
                 puts("Esta Opção não existente.");
            break;
        }
    }
    while(opcao!=3);
}

void inicializar()
{
    
    contasDiarias.diaDoMes = 1;
    
    strcpy(contasDiarias.descricao, "NULL");
    strcpy(contasDiarias.situacao, "NULL");
    contasDiarias.valor = 0.0;
}

void cadastrar()
{
	inicializar();
    printf(" Digite o dia do mes: ");
    scanf("%d", &contasDiarias.diaDoMes);
    printf(" Digite uma descricao da Conta: ");
    scanf("%s", &contasDiarias.descricao);
    printf(" Digite o Status da  Conta : ");
    scanf("%s", &contasDiarias.situacao);
    printf(" Digite o valor da Conta: ");
    scanf("%f", &contasDiarias.valor);
}

void imprimir()
{
    printf(" \n O dia do mes é: %d ", contasDiarias.diaDoMes);
    printf(" \n A descricao da conta é: %s ", contasDiarias.descricao);
    printf(" \n O status da conta é: %s ", contasDiarias.situacao);
    printf(" \n O valor da conta é: %.2f ", contasDiarias.valor);
    printf(" \n \n");
}
