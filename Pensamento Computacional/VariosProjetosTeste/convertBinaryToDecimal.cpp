#include <stdio.h>
#include <math.h>

//Orograma em C para converter o números binário em decimal.

/*
Descrição do Problema : 

Este programa usa um número binário como entrada e o converte em número decimal.

Solução do problema:

1. Tome um número binário como entrada. 
2. Multiplique cada dígito do número binário começando do último com os poderes de 2 respectivamente. 
3. Adicione todos os dígitos multiplicados. 
4. A soma total dá o número decimal.




*/

// Funcão para conveerter o numero binario para decimal
int convertBinarioParaDecimal( )
{
	long numero=0;
	// variavel para salvar o numero decimal
    long decimalNumber = 0;
    
    // variavel de controle usado dentro do laco while
	long contador = 0;
	
	// variavel usado para armazenar o resto da divisao por 10
	long resto = 0;
	
	// loop usado para fazer o calculo enquanto o numero for diferente de  0
    while (numero!=0)
    {
    	// Pegando resto do numero digitado  numa divisao por 10
        resto = numero%10;
        
        //Divide o numero por 10
        numero = numero / 10;
        
        /*Salva na variavel decimalNumber o calculo  o resto da duvisao
         elevado a podenccia de 2 com base no numero qu esta no contador
        */
        decimalNumber = decimalNumber + resto * pow(2,contador);
        
        //Variavel que incrementa o contado e de 1 em 1 para achar a quantidade de digitos tem o numero
        contador++;
    }
    // Usado para poder armazernar valores digitados 
    long numeroDigitado;
    printf("Digite um numero binario: ");    
    // Usado para armazemar o numero digitado
    scanf("%i", &numeroDigitado);    
    // Aqui mostra o numero digitado em binario e chama a funcao para efetruar a conversao e mostar em decimal
    printf("O numero %ld em Binario e equivalente a : %d em Decimal. ", numeroDigitado, convertBinarioParaDecimal(numeroDigitado));
    
}


int main()
{
	convertBinarioParaDecimal( );
	return 0;
}




