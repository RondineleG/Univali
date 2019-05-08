#include <stdio.h>
#include <math.h>

int main() 
{
 int numeroDecimal, contador, inversor, valorDigitado, posicao;
 char numeroBinario[30];

  //Initialize the variables
 contador=0;
 posicao=0;
 numeroDecimal=0;

 // Lendo um numero Binario 
 printf("Digite o numero Binario : ");
 
 //Ignora espacos 
 while ((valorDigitado=getchar()) != '\n') {

	 //Verifique se a entrada é  0 (ASCII 48) ou 1 (ASCII 49)
	 // caso seja digitado qualquer outro nao e salvo no contador
	 if (valorDigitado == 48  || valorDigitado == 49 )
	     //salvando os numero no contador so aceita 0 e1
		 numeroBinario[contador++] = valorDigitado;
 }

 // Convertento o numero Binario para Decimal
 // Repita para cada dígito binário a partir do último elemento da matriz
 
  //A variaevel inversor server para efetuar a multiplicacao de do ultimo para o primeiro
 for (inversor = contador-1; inversor >= 0; inversor-- ) 
   {   
     //  
	 numeroDecimal +=  (numeroBinario[inversor] - '0') * (int)pow((double)2, posicao);
	 //Increment the position variable
	 posicao++;
   }

// Mostra o valor decimal
printf("Decimal value is : %d",numeroDecimal);


/* Wait for key press
 printf("\n\nPress any key to continue...");
 getchar();
*/
 return 0;
}
