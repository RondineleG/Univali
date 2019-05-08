programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		inteiro respotaMes
		real respostaDolar
		real bolsaMensal = 1500.00
		real conversaoParaDolar , arredondamentoPara2Casas
		escreva("\nAlgorítimo Conversão de Moeda","\n")
		escreva("\n-------------------------------------------")
		escreva("\n<- Inicio Algorítimo ->")
		escreva("\n-------------------------------------------")
		escreva("\nValor recebido por mês é :","R$" , bolsaMensal)
		escreva("\n-------------------------------------------")
		escreva("\nQuantos meses irá Ficar ?","\n")
		escreva("-------------------------------------------\n")
		leia(respotaMes)		
		escreva("Qual a cotação atual do colar ?")
		escreva("\n-------------------------------------------\n")
		leia(respostaDolar)	
		escreva("-------------------------------------------\n")
	     conversaoParaDolar = (respotaMes * bolsaMensal) /respostaDolar
	     arredondamentoPara2Casas = mat.arredondar(conversaoParaDolar, 2)
		escreva("Na cotação atual sua bolsa de R$", bolsaMensal,"\n", "Sera de US$",arredondamentoPara2Casas, " Dolares") 
		
	}
			

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1098; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */