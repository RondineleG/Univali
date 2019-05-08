#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
	 float const valorKWH =0.30;
	 const int quantidadeAparelhos = 4;

     int potencia;
     char nome[200];
     float quantidadeHoraUsadas, valorConsumido, consumo ;

    setlocale(LC_ALL,"portuguese");
    printf(" Digite o nome do aparelho: ");
    scanf("%s", &nome);
    printf(" Digite o potencia: ");
    scanf("%d", &potencia);
    printf(" Digite a quantidade de horas usada:");
    scanf("%f", &quantidadeHoraUsadas);
    consumo = potencia  * (quantidadeHoraUsadas * 30 )/ 1000 ;
    valorConsumido =  consumo * valorKWH;
    printf(" \n O cosumo  diario em KWH  e : %.2f ", consumo/30);
    printf(" \n O cosumo mensal em KWH  e : %.2f ", consumo);
    printf(" \n A conta do aparelho %s  e : R$%.2f ",nome, valorConsumido);
    printf(" \n ");

    return 0;
}
