#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <math.h>

void Menu();

void LinhaNaTela()
{
  puts("***************************************************************************");	
}

void ConverteBinarioParaDecimal()
{   
    /// limpando buff do teclado
	setbuf(stdin,NULL);
	// Criando e inicializando as variaveis principais
	int numeroDecimal =0, contador= 0, inversor, valorDigitado, posicao =0;
	char numeroBinario[8];
	// Lendo um numero Binario 
	LinhaNaTela();
	puts("Digite o numero Binario : ");
	/* Aqui em vez de usar scanf usa getchar,
	ele ler um caracter por vez ignora espacos e salva a entrada na variavel valordigitado	*/
	while ((valorDigitado = getchar()) != '\n')
	{
		//Verifica a entrada  pela tabela ASCII 48 =0  e  49 =1
		// caso seja digitado qualquer  letra ou outro caracter sera ignorado nao e salvo no contador
		if (valorDigitado == 48 || valorDigitado == 49)
			//salvando os numero no contador somente  aceita 0 e 1			
			//O contador recebe o primiro e incrementa mais 1 para salavar o proximo.
		numeroBinario[contador++] = valorDigitado;
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
	LinhaNaTela();
	printf("O numero decimal  e : \n%d", numeroDecimal);
	puts("\n");
	LinhaNaTela();
}

void CoverterDecimalParaBinario() /* FUNÇÃO CHAMANDO DECIMAL PARA BINÁRIO****************************************************************/
{

    int numeroDecimal, indice;
    int vetor[30];
    LinhaNaTela();
    puts("Digite um decimal:");
    scanf("%d", &numeroDecimal); /* PEDE O DECIMAL */
    LinhaNaTela();
    puts("Seu Numero Decimal Em Binario e: ");   
    for (indice = 29; indice >= 0; indice--) /* CALCULA O BINÁRIO */
    {
        if (numeroDecimal % 2 == 0)
            vetor[indice] = 0;

        else
            vetor[indice] = 1;
            numeroDecimal = numeroDecimal / 2;
    }
    for (indice = 0; indice < 30; indice++){ /* INVERTE O VETOR RESTO*/
        printf("%d",vetor[indice]); /* PRINTA O VETOR RESULTADO INVERTIDO*/        
    }
    puts("\n");
	LinhaNaTela();  
} /*FECHA FUNÇÃO 1**************************************************************************************************************/


/* COMEÇA A MAIN ***************************************************************************************************************/
int main()
{
    setlocale(LC_ALL,"Portuguese");
    // Usado para colococar um titulo na aplicaçoa
    SetConsoleTitle("Conversor De Bases Numericas");
    Menu();    
}

void Menu()
{
     int operacao;
     char refazOperacao;

    do{ /* REPETE O PROGRAMA CASO QUEIRA REFAZER OUTRA CONVERSÃO */    

    do{ /* REPETE ENQUANTO O USUÁRIO NÃO INSERE VALOR VÁLIDO */

    LinhaNaTela();
    printf("** CONVERSOR DO CURSO DE ANÁLISE E DESENVOLVIMENTO DE SISTEMAS - UNIVALI **\n");
    LinhaNaTela();
    puts("\n");
    puts("[1] DECIMAL -> BINÁRIO"); // CASO 1
    puts("[2] BINÁRIO -> DECIMAL"); // CASO 2
    puts("[3] DECIMAL -> OCTAL"); // CASO 3
    puts("[4] OCTAL -> DECIMAL"); // CASO 4
    puts("\n");
    puts("QUAL CONVERSÃO GOSTARIA DE FAZER?");
    
    scanf("%d", &operacao); /* ESCOLHER QUAL OPERAÇÃO */
    switch (operacao) /* COMEÇA O SWITCH */
    {
        case 1: /* COMEÇA CASO 1 CHAMANDO FUNÇÃO 1 */
            CoverterDecimalParaBinario();
        break;

        case 2: /* COMEÇA CASO 2 CHAMANDO FUNÇÃO 2 */
         ConverteBinarioParaDecimal();
        break;

        case 3: /* COMEÇA CASO 3 CHAMANDO FUNÇÃO 3 */
        printf("CASO 3");
        break;

        case 4: /* COMEÇA CASO 4 CHAMANDO FUNÇÃO 4 */
        printf("CASO 4");
        break;

        default:
        system("cls");	       
        puts("Opção inválida,Tente Novamente"); 
		puts("\n");          
        
     }
    }while(operacao!=1 && operacao!=2 && operacao!=3 && operacao!=4); /* CASO OPÇÃO SEJA DIFERENTE DE 1, 2, 3 OU 4 */
  
    puts("Deseja fazer uma nova conversão? [S/N]"); /* REFAZER CONVERSÃO? */
    scanf("%s", &refazOperacao);

    }while (refazOperacao=='s' || refazOperacao=='S' ); /* SE SIM, CHAMA O PROGRAMA DE NOVO */

    if (refazOperacao='n' || refazOperacao=='N'); /* SENÃO, MOSTRA TELA ABAIXO */
    
    LinhaNaTela();
    puts("**                   OBRIGADO POR USAR NOSSO CONVERSOR                   **");
    LinhaNaTela();	
}
