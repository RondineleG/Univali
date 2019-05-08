// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <tchar.h>
using namespace std;

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

void inicioAlgoritimo()
{
	linhaNaTela();
	SetConsoleTitle(_T("Algoritimo Concerta Veiculo"));
	cout << "<-Inicio Algoritimo->" << endl;
	linhaNaTela();
	linhaNaTela();
	cout << "Veiculo Apresentando Falhas" << endl;
	linhaNaTela();
	tentarPartida();


}

void fimAlgoritimo()
{
	cout << "<-Fim Algoritimo->" << endl;
	exit(0);
}
void linhaNaTela()
{
	cout << "--------------------------------------------------------------------------" << endl;
}

void mensagenNaTela()
{
	cout << "Digite S para Sim ou N para Nao" << endl;
	linhaNaTela();
}
void mensagenNaSenao()
{
	mensagenNaTela();
	cout << "O Programa e Case Sensitive," << endl;
	cout << "Maiusculo e diferente de Minusculo," << endl;
	linhaNaTela();
	cout << "TENTE DE NOVO!!!" << endl;
	linhaNaTela();

}

void tentarPartida()
{

	char respostaDigitada = '0';
	cout << "Tentar Dar Partida No Veiculo." << endl;
	cout << "Veiculo Funcionou ?" << endl;
	linhaNaTela();
	mensagenNaTela();
	scanf_s("%s", &respostaDigitada);
	if (respostaDigitada == 'S')
	{
		linhaNaTela();
		cout << "Entao va trabalhar" << endl;
		cout << "Quer fazer um novo teste ?" << endl;
		mensagenNaTela();
		scanf_s("%s", &respostaDigitada);
		if (respostaDigitada == 'N')
		{
			fimAlgoritimo();
		}
		if (respostaDigitada == 'S')
		{
			inicioAlgoritimo();
		}
		else
		{
			mensagenNaSenao();
			tentarPartida();
		}


	}
	else if (respostaDigitada == 'N')
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
	cout << "Consegue Mover O Veiculo ?" << endl;
	linhaNaTela();
	mensagenNaTela();
	scanf_s("%s", &respostaDigitada);
	if (respostaDigitada == 'S')
	{
		cout << "Possui dinheiro suficiente ?" << endl;
		linhaNaTela();
		scanf_s("%s", &respostaDigitada);
		if (respostaDigitada == 'S')
		{
			levarNoMecanico();
		}
		else if (respostaDigitada == 'N')
		{

			cout << "Juntar dinheiro suficeiente" << endl;
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
		cout << "Possui dinheiro suficiente ?" << endl;
		linhaNaTela();
		scanf_s("%s", &respostaDigitada);
		if (respostaDigitada == 'S')
		{
			levarNoMecanico();
		}
		else if (respostaDigitada == 'N')
		{

			cout << "Juntar dinheiro suficeiente" << endl;
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
	cout << "Verificar Sinalizador De Bateria No Painel." << endl;
	cout << "Tem Sinal ?" << endl;
	linhaNaTela();
	mensagenNaTela();
	scanf_s("%s", &respostaDigitada);
	if (respostaDigitada == 'S')
	{
		verificarCombustivel();
		moverVeiculo();
		scanf_s("%s", &respostaDigitada);
		if (respostaDigitada == 'S')
		{
			linhaNaTela();
			levarNoMecanico();

		}
		else if (respostaDigitada == 'N')
		{
			ligarNoMecanico();
		}
		else
		{
			mensagenNaSenao();
			verificarBateria();
		}

	}
	else if (respostaDigitada == 'N')
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
	cout << "Verificar Nivel de combustivel no painel." << endl;
	cout << "Tem Combustivel ?" << endl;
	linhaNaTela();
	mensagenNaTela();
	scanf_s("%s", &respostaDigitada);
	if (respostaDigitada == 'S')
	{
		moverVeiculo();
		ligarNoMecanico();

	}
	else if (respostaDigitada == 'N')
	{
		linhaNaTela();
		cout << "Comprar Combustivel e Colocar no veiculo " << endl;
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
	cout << "Ligue Para o Mecaninico  vim em casa e fazer uma analise." << endl;
	linhaNaTela();
	cout << "Qual foi a analise do mecanico ?" << endl;
	analiseDoVeiculo();
	cout << "E varias tentativas de ligar o veiculo descarrego a bateria." << endl;
	mensagenNaTela();
	fazerOrcamento();
}

void levarNoMecanico()
{
	linhaNaTela();
	cout << "Leve o veiculo na oficina e faça uma analise no veiculo." << endl;
	cout << "Qual foi a analise do mecanico ?" << endl;
	linhaNaTela();
	analiseDoVeiculo();
	fazerOrcamento();

}

void analiseDoVeiculo()
{
	cout << "Foi indentificado Gasolina adulterada no veiculo," << endl;
	cout << "que entupiu bomba e bicos injetores causando falhas." << endl;


}
void fazerOrcamento()
{
	char respostaDigitada = '0';
	linhaNaTela();
	printf("\n");
	cout << "Soilitar um Orcamento." << endl;
	cout << "Orcamento foi aprovado ?" << endl;
	linhaNaTela();
	mensagenNaTela();
	scanf_s("%s", &respostaDigitada);
	if (respostaDigitada == 'S')
	{

		linhaNaTela();
		cout << "Solicitar Concerto do veiculo :." << endl;
		cout << "Resolveu o problema ?" << endl;
		mensagenNaTela();
		linhaNaTela();
		scanf_s("%s", &respostaDigitada);
		if (respostaDigitada == 'S')
		{
			linhaNaTela();
			cout << "Entao vai para escola." << endl;
			linhaNaTela();
			cout << "Quer fazer um novo teste ?" << endl;
			mensagenNaTela();
			scanf_s("%s", &respostaDigitada);
			if (respostaDigitada == 'N')
			{
				fimAlgoritimo();
			}
			if (respostaDigitada == 'S')
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
			cout << "Entao liga para o mecanico." << endl;

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
		cout << "Comprar Combustivel e Colocar no veiculo " << endl;
		tentarPartida();
	}
	else
	{
		mensagenNaSenao();
		fazerOrcamento();
	}

}
int main()
{
	inicioAlgoritimo();
	system("pause");
	return 0;
}




