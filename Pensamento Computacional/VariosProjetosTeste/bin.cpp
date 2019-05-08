#include <stdio.h>
#include <math.h>
int binary_decimal(int n);
int decimal_binary(int n);
int main()
{
   int n;
   char c;
   printf("Instructions:\n");
   printf("1. Enter alphabet 'd' to convert binary to decimal.\n");
   printf("2. Enter alphabet 'b' to convert decimal to binary.\n");
   scanf("%c",&c);
   if (c =='d' || c == 'D')
   {
       printf("Enter a binary number: ");
       scanf("%d", &n);
       printf("%d in binary = %d in decimal", n, binary_decimal(n));
   }
   if (c =='b' || c == 'B')
   {
        
       
       printf("%d in decimal = %d in binary", n, decimal_binary(n));
   }
   return 0;
}

int decimal_binary(int n)  /* Function to convert decimal to binary.*/
{
     int j, numeroBinario=0, restoDivisao =0, decimal=0, vetorBinario[50];
	puts("Digite o numero decimal");
	scanf("%d", &decimal);	
	while (decimal > 0)
	{
		restoDivisao = decimal % 2;
		vetorBinario[numeroBinario] = restoDivisao;
		decimal = decimal / 2;
		numeroBinario++;

	}
	for (j = numeroBinario - 1; j >= 0; j--)
	{
		printf("%d", vetorBinario[j]);
	}
}

int binary_decimal(int n) /* Function to convert binary to decimal.*/

{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}
