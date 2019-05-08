#include <stdio.h>
#include <mem.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    inicioAlgoritimo();    
    return (0);
}
void verificarBateria(void);
void levarNoMecanico(void);
void ligarNoMecanico(void);
void verificarCombustivel(void);
void fazerOrcamento(void);
void tentarPartida(void);
void moverVeiculo(void);
void linhaNaTela(void);
void fimAlgoritimo(void);
void analiseDoVeiculo(void);
void possuiDinheiro(void);

void inicioAlgoritimo()
{   
    linhaNaTela();   
    SetConsoleTitle("Algoritimo Concerta Veiculo\n");
    printf("\n<-Inicio Algoritimo->\n");
    linhaNaTela();    
    printf("\nVeiculo Apresentando Falhas\n");    
    linhaNaTela();
    tentarPartida();
    

 }

void fimAlgoritimo()
{
	
	printf("<-Fim Algoritimo->");	
	exit(0);
}
void linhaNaTela()
{
	printf("\n----------------------------------------------------------\n");    
}

void mensagenNaTela(){
    
    printf("Digite S para Sim ou N para Nao","\n");
    linhaNaTela();
}
int mensagenNaSenao()
{
    mensagenNaTela();    
    printf("\nO Programa e Case Sensitive,\n");
    printf("\nMaiusculo e diferente de Minusculo,\n");
    linhaNaTela();
    printf("\nTENTE DE NOVO!!!\n");
    linhaNaTela();    
   
}

void tentarPartida()
{

    char respostaDigitada = '0';
    printf("\nTentar Dar Partida No Veiculo.\n");
    printf("\nVeiculo Funcionou ?\n");
    linhaNaTela();
    mensagenNaTela();
    scanf("%s",&respostaDigitada);
    if (respostaDigitada == 'S')
    {
        linhaNaTela();
        printf("\nEntao va para escola\n");
        printf("\nQuer fazer um novo teste ?\n");
        mensagenNaTela();
        scanf("%s",&respostaDigitada);
        if(respostaDigitada == 'N')
        {
        	fimAlgoritimo();            
        }
        if(respostaDigitada == 'S')
        {
             inicioAlgoritimo();
        }
        else
         {
          mensagenNaSenao();
          tentarPartida();
         }
 

    } else if (respostaDigitada == 'N')
    {
        verificarBateria();
    }
    else
    {
        mensagenNaSenao();
        tentarPartida();
    }
}

void moverVeiculo()
{

    char respostaDigitada = '0';
    linhaNaTela();
    printf("\nConsegue Mover O Veiculo ?\n");
    linhaNaTela();
    mensagenNaTela();
    scanf("%s",&respostaDigitada);
    if (respostaDigitada == 'S')
    {
       printf("\nPossui dinheiro suficiente ?\n"); 
	   linhaNaTela();      
       scanf("%s",&respostaDigitada);
       if (respostaDigitada == 'S')
       {
          levarNoMecanico();
       } 
	   else if (respostaDigitada == 'N')
       {
        
        printf("\nJuntar dinheiro suficeiente\n");
        fimAlgoritimo();
        
    }
    else
    {
        mensagenNaSenao();
        moverVeiculo();
    }

    }
    else if (respostaDigitada == 'N')
    {
        printf("\nPossui dinheiro suficiente ?\n"); 
	   linhaNaTela();      
       scanf("%s",&respostaDigitada);
       if (respostaDigitada == 'S')
       {
          levarNoMecanico();
       } 
	   else if (respostaDigitada == 'N')
       {
        
        printf("\nJuntar dinheiro suficeiente\n");
        fimAlgoritimo();
        
    }
    else
    {
        mensagenNaSenao();
        moverVeiculo();
    }

    }
    else
    {
        mensagenNaSenao();
        moverVeiculo();
    }
}

void verificarBateria()
{
    char respostaDigitada = '0';
    linhaNaTela();
    printf("\nVerificar Sinalizador De Bateria No Painel.\n");
    printf("\nTem Sinal ?\n");
    linhaNaTela();
    mensagenNaTela();
    scanf("%s",&respostaDigitada);
    if (respostaDigitada == 'S')
    {
        verificarCombustivel();
        moverVeiculo();
        scanf("%s",&respostaDigitada);
        if (respostaDigitada == 'S')
        {
            linhaNaTela();
            levarNoMecanico();

        } else if (respostaDigitada == 'N')
        {
            ligarNoMecanico();
        }
        else
        {
            mensagenNaSenao();
            verificarBateria();
        }

    } else if (respostaDigitada == 'N')
    {
        ligarNoMecanico();
    }
    else
    {
        mensagenNaSenao();
        verificarBateria();
    }
}

void verificarCombustivel()
{

    char respostaDigitada = '0';
    linhaNaTela();
    printf("\nVerificar Nivel de combustivel no painel.\n");
    printf("\nTem Combustivel ?\n");
    linhaNaTela();
    mensagenNaTela();
    scanf("%s",&respostaDigitada);
    if (respostaDigitada == 'S')
    {
        moverVeiculo();
        ligarNoMecanico();

    } else if (respostaDigitada == 'N')
    {
        linhaNaTela();
        printf("\nComprar Combustivel e Colocar no veiculo ");
        tentarPartida();
    }
    else
    {
        mensagenNaSenao();
        verificarCombustivel();
    }
}

void ligarNoMecanico()
{
    linhaNaTela();
    printf("\nLigue Para o Mecaninico  vim em casa e fazer uma analise.\n");  
	linhaNaTela();   
    printf("\nQual foi a analise do mecanico ?\n"); 
   analiseDoVeiculo();
    printf("\nE varias tentativas de ligar o veiculo descarrego a bateria.\n");
    mensagenNaTela();
	fazerOrcamento();
}

void levarNoMecanico()
{
    linhaNaTela();
    printf("\nLeve o veiculo na oficina e fa?a uma analise no veiculo.\n");
    printf("\nQual foi a analise do mecanico ?\n");
    linhaNaTela();   
    analiseDoVeiculo();
    fazerOrcamento();    

}

void analiseDoVeiculo()
{
	 printf("\nFoi indentificado Gasolina adulterada no veiculo,\n");
     printf("\nque entupiu bomba e bicos injetores causando falhas.\n");     
     

}
void fazerOrcamento()
{
    char respostaDigitada = '0';
    linhaNaTela();    
    printf("\nSoilitar um Orcamento.\n");
    printf("\nOrcamento foi aprovado ?\n");
    linhaNaTela();
    mensagenNaTela();
    scanf("%s",&respostaDigitada);
    if (respostaDigitada == 'S')
    {

        linhaNaTela();
        printf("\nSolicitar Concerto do veiculo :.\n");
        printf("\nResolveu o problema ?\n");
        mensagenNaTela();
        linhaNaTela();
        scanf("%s",&respostaDigitada);
        if (respostaDigitada == 'S')
        {
            linhaNaTela();
            printf("\nEntao vai para escola.\n");
            linhaNaTela();
            printf("\nQuer fazer um novo teste ?\n");
            mensagenNaTela();
            scanf("%s",&respostaDigitada);
            if(respostaDigitada == 'N')
        {
        	fimAlgoritimo();            
        }
        if(respostaDigitada == 'S')
         {
             inicioAlgoritimo();
         }
        else
         {
            mensagenNaSenao();
            fazerOrcamento();
         }
       }
		 else if (respostaDigitada == 'N')
        {
            linhaNaTela();
            printf("\nEntao liga para o mecanico.\n");
            
        }
        else
        {
            mensagenNaSenao();
            fazerOrcamento();
        }

    } else if (respostaDigitada == 'N')
    {
        linhaNaTela();
        printf("\nComprar Combustivel e Colocar no veiculo\n ");
        tentarPartida();
    }
    else
    {
        mensagenNaSenao();
        fazerOrcamento();
    }

}




