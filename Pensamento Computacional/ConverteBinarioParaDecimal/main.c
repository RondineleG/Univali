#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int convertBinarioParaDecimal( long numero)
{
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
    return decimalNumber;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    puts("-----------------------------------------------------------------------------");
    puts("  Projeto Integrador - Conversor De Numeros Binarioa Para Decimal ");
    puts("-----------------------------------------------------------------------------");


    puts("-----------------------------------------------------------------------------");
    puts("**                     <-Fim Do Programa->                   ");
    puts("-----------------------------------------------------------------------------");

    return 0;
}
