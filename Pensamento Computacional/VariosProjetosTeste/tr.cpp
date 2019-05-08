#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdint.h>
#include <math.h>



//Programa em C para converter o números binário em decimal.

/*
Descrição do Problema :

Este programa usa um número binário como entrada e o converte em número decimal.

Solução do problema:

1. Tome um número binário como entrada.
2. Multiplique cada dígito do número binário começando do último  2 e todoos seguintes do maior para o menor.
3. Adicione todos os dígitos multiplicados.
4. A soma total dá o número decimal.




*/

// Funcão para conveerter o numero binario para decimal
int convertBinarioParaDecimal(int numero)
{
	/// 101010
	

	// variavel para salvar o numero decimal
	 int  decimalNumber = 0;

	// variavel de controle usado dentro do laco while
	 int contador = 0;

	// variavel usado para armazenar o resto da divisao por 10
	 int resto = 0;

	// loop usado para fazer o calculo enquanto o numero for diferente de  0	

	while (numero != 0)
	{ // 101010  e diferente de  0 ? Sim
		// Pegando resto do numero digitado  numa divisao por 10
		resto = numero % 10;

		// 101010 dividido por 10 e salva no na variavel resto recebe 0

		//Divide o numero por 10
		numero = numero / 10;
		// 101010 dividido por 10 e salva no na variavel nuner recebe 10101

		/*Salva na variavel decimalNumber o calculo  o resto da duvisao
		 elevado a podenccia de 2 com base no numero qu esta no contador
		*/
		decimalNumber = decimalNumber + resto * pow(2, contador);
		// Aqui 

		//Variavel que incrementa o contado e de 1 em 1 para achar a quantidade de digitos tem o numero
		contador++;
	}
	return decimalNumber;
}


int main()
{
	// Usado para poder armazernar valores digitados 
    int numeroDigitado;

	printf("Digite um numero binario: ");

	// Usado para armazemar o numero digitado
	scanf("%i", &numeroDigitado);

	// Aqui mostra o numero digitado em binario e chama a funcao para efetruar a conversao e mostar em decimal
	printf("O numero %i em Binario e equivalente a : %i em Decimal. ", numeroDigitado, convertBinarioParaDecimal(numeroDigitado));
	return 0;
}




