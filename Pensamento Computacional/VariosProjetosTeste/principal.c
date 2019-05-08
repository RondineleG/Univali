#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void linhaNaTela(void);
void mineMenu(void);

int DecimalBinary(int decimal) {
	static int counter = 0;
	counter++;
	if (decimal==0){
		return 0;
	}
	if (decimal==1) {
		return pow(10,counter-1);
	}
	int r = (decimal % 2) * (pow(10,counter-1));
	return DecimalBinary(decimal/2) + r;
}

int DecimalOctal(int decimal){
	static int counter = 0;
	counter++;
	if(decimal==0){
		return 0;
	}
	if(decimal==1){
		return pow(10, counter-1);
	}
	int r = (decimal % 8) * (pow(10, counter-1));
	return DecimalOctal(decimal/8) + r;
}

int DecimalHexadecimal(int decimal){
	static int counter = 0;
	counter++;
	if (decimal==0){
		return 0;
	}
	if (decimal==1) {
		return pow(10,counter-1);
	}
	int r = (decimal % 16) * (pow(10,counter-1));
	return DecimalHexadecimal(decimal/16) + r;
}

int main(void)
{
	int selected_value, option;
	
	printf("Input a number in decimal base: ");
	scanf("%d",&selected_value); //Read the value to be converted
	printf("Choose the type of converter: \n[1] - Binary\n[2] - Octal\n[3] - Hexadecimal\n");
	 //The user chooses the convertion based on the option [1], [2] or [3].
	scanf("%i", &option);
	system("cls");
	switch(option){
		//Converts the decimal base to binary and option receives the function.
		case 1:
			option = DecimalBinary(selected_value);
			break;
		case 2:
			//Converts the decimal base to octal and option receives the function.
			option = DecimalOctal(selected_value);
			break;
		case 3:
			//Converts the decimal base to hexadecimal and option receives the function.
			option = DecimalHexadecimal(selected_value);
			break;
	}
	//Prints the value after conversion.
	printf("This is the number in the selected base: %d", option);
	return (0);
}
void mineMenu()
{
    SetConsoleTitle("Algoritimo Conversor Bases Numericas");
    linhaNaTela();
    puts("Conversor Bases Numericas");
    linhaNaTela();
    linhaNaTela();
    puts("<-Inicio Algoritmo ->");
    linhaNaTela();
    puts("Escolha a letra que corresponde a convercao desejada");
    linhaNaTela();
    puts(" [A] - Decimal Para Hexadecimal\n");
    puts(" [B] - Hexadecimal para Decimal\n");
    puts(" [C] - Decimal para Binario\n");
    puts(" [D] - Binario para Decimal");
    linhaNaTela();

}


void linhaNaTela()
{
    puts("-------------------------------------------------------");
}

