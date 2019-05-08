#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    char Descricao[50];
    int DiaDoMes;
    float ValorDaConta;
    char Situacao [50];
    float valorTotal;

} ContaDoMes;

ContaDoMes Dia[31];

void SomaContas(void);
void ContasMensal(void);

int main()
{
	    puts("------------------------------------------------------------------------------");
	     puts("Gerenciador de Contas diarias: ");
	    puts("------------------------------------------------------------------------------");
    int i;
    setlocale(LC_ALL,"portuguese");
	ContasMensal();




    for(i=1; i<=2; i++)
	{
		puts("------------------------------------------------------");
    	printf("\nContas do dia %d\n", i);
    	puts("------------------------------------------------------");
        printf("\n Descrico da conta : %s", Dia[i].Descricao);
        printf("\n Valor da conta e: R$ %.2f ", Dia[i].ValorDaConta);
        printf("\n Situacao Da Conta : %s ", Dia[i].Situacao);
        puts("------------------------------------------------------");
    }

}

void ContasMensal()
{
        int i;
        for(i=1; i<=2; i++)
        {

	    puts("------------------------------------------------------------------------------");
        puts("Descricao da conta");
        scanf("%s%*c", &Dia[i].Descricao);
	    puts("------------------------------------------------------------------------------");
        puts("Digite o dia do mes: ");
        scanf("%d%*c", &Dia[i].DiaDoMes);
	    puts("------------------------------------------------------------------------------");
        puts("Digite o valor da conta: ");
        scanf("%f%*c", &Dia[i].ValorDaConta);
	    puts("------------------------------------------------------------------------------");
        puts("Qual Situaçao ? P -> Paga N -> Nao Paga");
        scanf("%s%*c", &Dia[i].Situacao);
        printf("\nContas do dia %d\n", i = Dia[i].DiaDoMes);
	    puts("------------------------------------------------------------------------------");

    }
}
