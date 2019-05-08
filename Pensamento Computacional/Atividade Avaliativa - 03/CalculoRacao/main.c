#include <stdio.h>

int main(){


	puts("Algoritmo Calculo Racao");
	float quantidadeRacaoComprada, consumoCachorro1,consumoCachorro2;
	int cachorro1=1, cachorro2=1;
	puts("Quantos Kg de racao comprou ?");
	scanf("%f", &quantidadeRacaoComprada);
	puts("Quantidade em  Gramas consumidos pelo Cachorro 1");
	scanf("%f", &consumoCachorro1);
	puts("Quantidade em  Gramas consumidos pelo Cachorro 1");
	scanf("%f", &consumoCachorro2);	
    printf("\nO consumo diario para  Cachorro 1 e %.0f Gramas", consumoCachorro1);
	printf("\nO consumo diario para  Cachorro 2 e %.0f Gramas", consumoCachorro2);
	printf("\n Para a quantidade comprada %.0f KG", quantidadeRacaoComprada);
	float d = quantidadeRacaoComprada / (consumoCachorro1 + consumoCachorro2);
	printf("\n Deve durar aproximadamentente %.1f  dias", d);

	return 0;

}
