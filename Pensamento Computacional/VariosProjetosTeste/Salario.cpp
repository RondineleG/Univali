#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
	 
     char sexo;
     int totalM =0, totalF=0 ,totalN=0, quantidadeFuncionarios = 0, quantidade ;
     float salarioBruto,
	       valorPorHoraTrabalhada,
	       quantidadeHorasTrabalhada,
	       salarioLiquido,
	       porcentagenDescontos,
	       totalDescontos,
	       valorDesconto ; 
		        
	   puts("Algoritimo Calculo de Salario : ");
	   puts("-----------------------------------------------------------");


       puts("Qual a qunatidade de Funcionarios : ");
       	   puts("-----------------------------------------------------------");

       scanf("%i", &quantidadeFuncionarios); 
       for(int i=0; i<quantidadeFuncionarios; i++)       
	   
    {
            puts("-----------------------------------------------------------");
            printf("Entre com o Sexo do funcionario %i : ",i +1);      
            fflush(stdin);
            scanf( "%c", &sexo );
            puts("Digite a quantidade de Horas Trabalhadas: ");
	        scanf("%f", &quantidadeHorasTrabalhada);
            puts("Valor da hora trabalhada : ");
	        scanf("%f", &valorPorHoraTrabalhada);
            puts("Percentual de desconto : ");
	        scanf("%f", &porcentagenDescontos);
		    puts("-----------------------------------------------------------"); 
	        salarioBruto = quantidadeHorasTrabalhada * valorPorHoraTrabalhada;
            totalDescontos = (porcentagenDescontos / 100) * salarioBruto;
            salarioLiquido = salarioBruto - totalDescontos;
	        printf("Salário bruto e : %5.2f\n", salarioBruto);
            printf("Total de desconto : %5.2f\n", totalDescontos);
            printf("Salario liquido e : %5.2f\n", salarioLiquido);
            puts("-----------------------------------------------------------");
  
        if( sexo == 'm' || sexo == 'M' )
            totalM = totalM + 1;

        if( sexo == 'f' || sexo == 'F' )
        {
            totalF = totalF + 1;
           
        }
		if(sexo=='n' || sexo=='N')
        {
            totalN = totalN +1;
        }        

        
    }              
      printf( "O total de pessoas do sexo masculino e: %d\n", totalM );
      printf( "O total de pessoas do sexo feminino  e: %d\n", totalF );
      printf( "O total de pessoas sem sexo declarado e: %d\n", totalN );

return 0;

}
