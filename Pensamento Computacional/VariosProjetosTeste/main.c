#include <stdio.h>
#include <conio.h>

int main()
{
	int numeroDigitado, numeroDigitadoOriginal , restoDivisao, numeroBinario=0, i;1;
	
	puts("Digite um numero decimal");
	scanf("%d",&numeroDigitado);	
	numeroDigitadoOriginal=numeroDigitado;	
	while(numeroDigitado!=0)
	{
		restoDivisao=numeroDigitado%2;
		numeroDigitado=numeroDigitado/2;
		numeroBinario = numeroBinario+(restoDivisao*i);
		i=i*10;
	}
	printf("\nO numero decimal %d em binario %d e: ",numeroDigitadoOriginal,numeroBinario);   
    return 0;
}
