#include <stdio.h>

int main()
{
	int contador=0,inversor,restoDivisao;
	long numeroDecimal;
	long long numeroBinario[8];
	puts("Digite o numero decimal");
	scanf("%d",&numeroDecimal);	
	while(numeroDecimal>0)
	{
		//Obten o resto da divisao
		restoDivisao=numeroDecimal%2;
		//Salva o resto da divisao na variavel contador
		//Comecando pelo indice 0
		numeroBinario[contador]=restoDivisao;
		//Faz uma nova divisao do quaciente
		numeroDecimal=numeroDecimal/2;
				
		contador++;
		
	}	
	// Iverte a posicao do numer
	for(inversor=contador-1;inversor>=0;inversor--)
	{
		printf("%d", numeroBinario[inversor]);
	} 
  return 0;
}
