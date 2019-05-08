#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    adjustWindowSize();
    setlocale(LC_ALL,"portuguese");
	puts("Algoritmo Calculo Racao");
	
	//Declarano as variaveis
	int quantidadeRacaoComprada ,consumoCachorro1, consumoCachorro2;
	int quantidadeVezesCachorro1, quantidadeVezesCachorro2;
	float totalConsumoCachorro1, totalConsumoCachorro2;
	// Entrada de dados
	puts("Quantos Kg de racao comprou ?");
	scanf("%d", &quantidadeRacaoComprada);
	// Convertendo Kg para gramas
	float quantidade = quantidadeRacaoComprada * 1000;
	puts("Quantas vezes Cachorro 1 comen por dia ?");
	scanf("%d", &quantidadeVezesCachorro1);
	puts("Quantidade consumidada cadas vezes pelot Cachorro 1");
	scanf("%d", &consumoCachorro1);
	puts("Quantas vezes Cachorro 2 comen por dia ?");
	scanf("%d", &quantidadeVezesCachorro2);
	puts("Quantidade consumidada cadas vezes pelot Cachorro 2");
	scanf("%d", &consumoCachorro2);	
	// Mostrando a quantidade em Gramas
	printf("\nA quantidade comprada foi convertida em Gramas %.4f Gramas", quantidade);
	// Calculando o consumo diario
	totalConsumoCachorro1 = consumoCachorro1 * quantidadeVezesCachorro1;
	totalConsumoCachorro2 = consumoCachorro2 * quantidadeVezesCachorro2;
	//Mostrando o valor consumido de cada cachorro
	printf("\nO consumo diario para  Cachorro 1 e %.2f Gramas", totalConsumoCachorro1);
	printf("\nO consumo diario para  Cachorro 2 e %.2f Gramas\n", totalConsumoCachorro2);
	// Somaando o consumo dos 2 cachorros
	int valorTotal = totalConsumoCachorro1 + totalConsumoCachorro2;
	// Calculando o numero de dias qu a raï¿½ï¿½o deve duarar
	int numeroDias = quantidade / valorTotal;
	puts("Com quantidade comprada");
	printf("A Raçao deve durar aproximadamentente %d dias", numeroDias);
	return 0;

}
