#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include "resource.h"

void ConverteBinarioParaDecimal();
void LinhaNaTela();
void mineMenu();
void FimPrograma();


int main()
{	
    char resposta;
    // Usado para colococar um titulo na aplicaçoa
    SetConsoleTitle("Projeto Integrador Hands Of Work ");
    // Usado para definir a linguase portuguesa
    setlocale(LC_ALL,"Portuguese");
    //Chamando a funcao 	
    mineMenu(); 
	
	return 0;
}

// Inicio da funcao que converte Numero Binarios Para Numeros Decimaos
void ConverteBinarioParaDecimal()
{   /// limpando buff do teclado
	setbuf(stdin,NULL);
	// Criando e inicializando as variaveis principais
	int numeroDecimal =0, contador= 0, inversor, valorDigitado, posicao =0;
	char numeroBinario[8];
	// Lendo um numero Binario
	LinhaNaTela();
	printf("Digite o numero Binario : ");
	/* Aqui em vez de usar scanf usa getchar,
	ele ler um caracter por vez ignora espacos e salva a entrada na variavel valordigitado	*/
	while ((valorDigitado = getchar()) != '\n')
	{
		
		//Verifica a entrada  pela tabela ASCII 48 =0  e  49 =1
		// caso seja digitado qualquer  letra ou outro caracter sera ignorado e  nao e salvo no contador
		if (valorDigitado == 48 || valorDigitado == 49)		
		{	
		  //salvando os numero no contador somente  aceita 0 e 1
		  //O contador recebe o primiro e incrementa mais 1 para salavar o proximo.			
		numeroBinario[contador++] = valorDigitado;
	   }
	   	    
	}

	/*
	   Repete para cada dígito binário a partir do último elemento da matriz
	   A variavel inversor server para efetuar a multiplicacao do ultimo para o primeiro
	   ela recebe o contador e cada volta do laco decrementa 1
	 */
	for (inversor = contador - 1; inversor >= 0; inversor--) {

		numeroDecimal += (numeroBinario[inversor] - '0') * (int)pow((double)2, posicao);
		/*
		Incrementa a posicao em 1 para  fazer o calcuço da base 2
		elevado a numero da posicao em sequencia partindo de 0 ate o maior numero
		*/
		posicao++;
	}
	// Mostra o valor decimal
    setbuf(stdin,NULL);
	LinhaNaTela();	
	printf("Este numero Binario e equivalente ao numero :  %d em Decimal", numeroDecimal);
	puts("\n");
	LinhaNaTela();
	char resposta;
	puts("Deseja fazer uma nova Opercaão ?");	
	puts("Digite S para Sim ou N Para Não ?");
	LinhaNaTela();
	resposta = getch();
	if(resposta =='s' || resposta=='S')
	{   
	    system("cls");
		mineMenu(); 
    }  
    if(resposta =='n' || resposta=='N')
	{
		FimPrograma();
		exit(1);
    }  
		
}

// Funcao que imprimi uma liha na tela
void LinhaNaTela()
{
  puts("-------------------------------------------------------------------");
}

void mineMenu()
{	
    LinhaNaTela();
    puts("     Conversor de Numeros Binarios Para Numeros Decimais");
    LinhaNaTela();    
    ConverteBinarioParaDecimal();

}

void FimPrograma()
{	system("cls");
    LinhaNaTela();    
    LinhaNaTela();    
    puts("                   Obrigado Por usar Nosso Conversor!");  
    LinhaNaTela();
    LinhaNaTela();    
}
