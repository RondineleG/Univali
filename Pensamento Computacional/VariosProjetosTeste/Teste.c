#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void BinarioDecimal();
int main()
{
    setlocale(LC_ALL,"portuguese");
      BinarioDecimal();
      return 0;
}
 
 void BinarioDecimal()
 {
 	int   numeroDigitado , numeroBinario , numeroDecimal =  0 , base =  1 , resto ; 
    puts("Digite um número binário (1s e 0s)");
    scanf ( "%d" ,  & numeroDigitado);  
    numeroBinario = numeroDigitado ;
    while  ( numeroDigitado > 0 )
    {
        resto = numeroDigitado %  10 ;
        numeroDecimal = numeroDecimal + (resto * base);
        numeroDigitado /=10  ;
        base *=2;
    }
    printf ( "O número Binário : %d e equivalente  : %d  em Decimal" , numeroBinario , numeroDecimal ) ;        

  
 }

 




