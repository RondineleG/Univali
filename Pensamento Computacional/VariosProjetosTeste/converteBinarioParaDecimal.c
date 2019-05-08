#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>

int main()
{
	int numeroDecimal, contador, inversor, valorDigitado, posicao;
	char numeroBinario[8];

	//Initialize the variables
	contador = 0;
	posicao = 0;
	numeroDecimal = 0;

	// Lendo um numero Binario 
	printf("Digite o numero Binario : ");	
	//Ignora espacos 
	while ((valorDigitado = getchar()) != '\n') {

		//Verifique se a entrada é pela tabela ASCII  0 = 48 e 1 = 49)
		// caso seja digitado qualquer outro valpr ignora nao e salvo no contador
		if (valorDigitado == 48 || valorDigitado == 49)
			/*salvando os numero binario no contador somente  aceita 0 e 1
			qualquer coisa digitado alem disso e ignorado
			*/
			numeroBinario[contador++] = valorDigitado;
	}

	// Convertento o numero Binario para Decimal
	// Repita para cada dígito binário a partir do último elemento da matriz

	 /*
	 A variaevel inversor server para efetuar a multiplicacao de do ultimo para o primeiro
	   ela recebe o contador menos 1 , porque o vetor numeroBinario[8] comceça  
	   com indice 0 ate 7 e o contador vem de 1 a  8
	 */ 
	for (inversor = contador - 1; inversor >= 0; inversor--)	{                               
	                                   
		numeroDecimal += (numeroBinario[inversor] - '0') * (int)pow((double)2, posicao);
		//Incrementa aposicao em 1 para  fazer o calcuço da base 2 elevado a numero da posicao em sequencia partindo de 0 ate o maior numero
		posicao++;
	}
	// Mostra o valor decimal
	printf("O numero decimal  e : %d", numeroDecimal);
	
	return 0;
}
