#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void calculoSalario();

int main()
{
	 
       puts("Algoritimo Calculo de Comicao: ");
	   puts("Faixa de Comição: ");
	   puts("[1] Vendas entre R$ 55.000,00 até R$ 100.000,00   ");
       puts("[2] Vendas ate R$ 25.000,00 ate R$ 55.000,00");
       puts("[3] Vendas acima de R$ 100.000,00");
       puts("[4] Vendas ate R$ 25.000,00 ");
  	   puts("-----------------------------------------------------------");
       puts("-----------------------------------------------------------");
       calculoSalario();     
	              
    
 
return 0;

}

void calculoSalario()
{    float salario,salarioComicao,porcentagenComicao, valorComicao ; 
   
     	int faixa;
	puts("Qual a sua faixa salarial ? : ");
       puts("-----------------------------------------------------------");
       scanf("%i", &faixa); 
       switch(faixa)
       {
       	case 1:
           	puts("Qual e seu  salarial: ");	
         	scanf("%f", &salario);
			 if(salario<55000 || salario >100000)
			 puts("Salario invalido");
			 {
			 	break;		 
			  }			 		
        	valorComicao = (2  / 100) * salario;
        	salarioComicao = salario + valorComicao;
        	printf("Seu salario e R$%7.2f e sua comicao e RS%5.2f\n",salario,valorComicao);
            printf("Seu salario com comicao e R$%5.2f ",salarioComicao);
        break;
        
        case 2:
       	    puts("Qual e seu  salarial: ");	
         	scanf("%f", &salario);	
			 if(salario<25000 || salario >55000)
			 puts("Salario invalido");
			 {
			 	break;			 	 
			 }	
			 valorComicao = 100;			
			salarioComicao = salario + valorComicao;
        	printf("Seu salario e R$%7.2f e sua comicao e RS%5.2f\n",salario,valorComicao);
            printf("Seu salario com comicao e R$%5.2f ",salarioComicao);
        break;
        case 3:
       	    puts("Qual e seu  salarial: ");	
         	scanf("%f", &salario);
			 if(salario <100000)
			 puts("Salario invalido");
			 {
			 	break;
		      }				
			valorComicao = 5000;
			salarioComicao = salario + valorComicao;
        	printf("Seu salario e R$%7.2f e sua comicao e RS%5.2f\n",salario,valorComicao);
            printf("Seu salario com comicao e R$%5.2f ",salarioComicao);
        break;
        case 4:
       	    puts("Qual e seu  salarial: ");	
         	scanf("%f", &salario);			 
            printf("Seu salario e R$%5.2f ",salario);
        break;
        
        defalt:
        	puts("Opcao invalido");
        	break;        	 
        
	   }      
}
