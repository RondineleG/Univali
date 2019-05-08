#include <stdio.h>

void main()
{
    int a[100];
    int numeroDeContas, sum=0;
	
	
       printf("\n\nGerenciador de Contas\n");
       printf("--------------------------------------\n");	

       printf("Digite a quantidde de contas por dia:");
       scanf("%d",&numeroDeContas);       
       printf("Digite %d Contas por dia :\n",numeroDeContas);
       for(int i=1;i<=numeroDeContas;i++)
        {
	      
	      printf("Conta  Numero - %d : ",i);
	      scanf("%d",&a[i]);
	      
	    }

    for(int i=0; i<=numeroDeContas; i++)
    {
        sum += a[i];
    }

    printf("A soma das contas e : %d\n\n", sum);
}

