#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <math.h>

void Menu();

// Funcao Que Escreve uma Linha Na Tela
void LinhaNaTela()
{
  puts("***************************************************************************");
}

// Funcao Que Converte Numero Decimal Para Numero BIN�RIO
void ConverteDecimalParaBinario() 
{

    int numeroDecimal, indice;
    int vetor[30];

    printf("\nDigite um decimal: ");
    scanf("%d", &numeroDecimal); /* PEDE O DECIMAL */

    printf("\nSEU DECIMAL EM BIN�RIO �: ");

    for (indice = 29; indice >= 0; indice--) /* CALCULA O BIN�RIO */
    {
        if (numeroDecimal % 2 == 0)
            vetor[indice] = 0;

        else
            vetor[indice] = 1;
            numeroDecimal = numeroDecimal / 2;

    }

    for (indice = 0; indice < 30; indice++){ /* INVERTE O VETOR RESTO*/
        printf("%d", vetor[indice]); /* PRINTA O VETOR RESULTADO INVERTIDO*/
    }
} /*FECHA FUN��O 1**************************************************************************************************************/

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
	   Repete para cada d�gito bin�rio a partir do �ltimo elemento da matriz
	   A variavel inversor server para efetuar a multiplicacao do ultimo para o primeiro
	   ela recebe o contador e cada volta do laco decrementa 1
	 */
	for (inversor = contador - 1; inversor >= 0; inversor--) {

		numeroDecimal += (numeroBinario[inversor] - '0') * (int)pow((double)2, posicao);
		/*
		Incrementa a posicao em 1 para  fazer o calcu�o da base 2
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
/***********************************************************************************************************************************/
void DecimalParaHexadecimal(){
int valor;
printf("\nInforme o valor em decimal: ");
                scanf("%d", &valor);
                    getchar(); // limpa o buffer do teclado
                        printf("%d em hexadecimal eh: %x\n", valor, valor); // o valor digitado em decimal(%d) vai ser convertido para hexadecimal(%x)
}
/***********************************************************************************************************************************/

void HexadecimalParaDecimal(){
int valor;
printf("\nInforme o valor em hexadecimal: ");
                scanf("%x", &valor);

                        printf("%x em decimal e :%d\n", valor, valor); // o valor digitado em hexadecimal(%x) vai ser convertido para decimal(%d)
}

/* COME�A A MAIN ***************************************************************************************************************/
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int opt;
    char refaz;

    do{ /* REPETE O PROGRAMA CASO QUEIRA REFAZER OUTRA CONVERS�O */
    system("cls");

    do{ /* REPETE ENQUANTO O USU�RIO N�O INSERE VALOR V�LIDO */

    printf("***************************************************************************\n");
    printf("** CONVERSOR DO CURSO DE AN�LISE E DESENVOLVIMENTO DE SISTEMAS - UNIVALI **\n");
    printf("***************************************************************************\n\n");

    printf("[1] DECIMAL -> BIN�RIO\n"); // CASO 1
    printf("[2] BIN�RIO -> DECIMAL\n"); // CASO 2
    printf("[3] DECIMAL -> HEXADECIMAL\n"); // CASO 3
    printf("[4] HEXADECIMAL -> DECIMAL\n\n"); // CASO 4

    printf("QUAL CONVERS�O GOSTARIA DE FAZER?: ");
    scanf("%d", &opt); /* ESCOLHER QUAL OPERA��O */

    switch (opt) /* COME�A O SWITCH */
    {
        case 1: /* COME�A CASO 1 CHAMANDO FUN��O 1 */
            decimalbinario();
        break;

        case 2: /* COME�A CASO 2 CHAMANDO FUN��O 2 */
            ConverteBinarioParaDecimal();
        break;

        case 3: /* COME�A CASO 3 CHAMANDO FUN��O 3 */
            DecimalParaHexadecimal();
        break;

        case 4: /* COME�A CASO 4 CHAMANDO FUN��O 4 */
            HexadecimalParaDecimal();
        break;

        default:
        printf("\n\nInsira um valor v�lido\n\n");
        system("pause");
        system("cls");
    }
    }while(opt!=1 && opt!=2 && opt!=3 && opt!=4); /* CASO OP��O SEJA DIFERENTE DE 1, 2, 3 OU 4 */

    printf("\n\nDeseja fazer uma nova convers�o? [S/N] "); /* REFAZER CONVERS�O? */
    scanf("%s", &refaz);

    } while (refaz=='s'); /* SE SIM, CHAMA O PROGRAMA DE NOVO */

    if (refaz='n'); /* SEN�O, MOSTRA TELA ABAIXO */

    system("cls");
    printf("***************************************************************************\n");
    printf("**                   OBRIGADO POR USAR NOSSO CONVERSOR                   **\n");
    printf("***************************************************************************\n");

    return 0;
}
