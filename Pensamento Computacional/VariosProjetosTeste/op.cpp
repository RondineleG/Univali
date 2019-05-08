#include <stdio.h>
#include  <math.h>


int main()
{
	int numero , i, j , resto;
	
	puts("Digite um numero decimal");
	scanf("%d",&numero);
	
	i =0;
	while(numero>0)
	{
		resto = numero%2;
		numero = numero /2;
		i = i*10;
		i++;
	}
	
	for(j=i-1;j>=0;j--)
	{
		printf("% em decima e equivalente a %d em binario", numero , j);
	}
	
	return 0;
}
