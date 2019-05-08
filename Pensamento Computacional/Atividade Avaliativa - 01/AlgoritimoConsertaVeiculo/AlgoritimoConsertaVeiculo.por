programa
{
	
	funcao inicio()
	{
		inicioPrograma()					
	}

      funcao inicioPrograma()
	  {			
		escreva("Começo Algoritimo Conserta Veiculo","\n")
	     linhaNaTela()
	     tentarPartida()
	  }
	  
      funcao mensagenNaTela()
      {
      	escreva("Digite S para Sim ou N para Não","\n")
      }
      
      funcao linhaNaTela()
      {
       escreva("--------------------------------------------------","\n")
      }

      funcao mensagenNaSenao()
      {
      	mensagenNaTela()
		escreva("O Programa É Case Sensitive,","\n","Maiusculo e diferente de Minusculo","\n")
		linhaNaTela()
	     tentarPartida()
      }
	 
	 funcao tentarPartida()
	{
		cadeia resposta
		linhaNaTela()
		escreva("Tente Dar Partida No Veiculo.","\n")
	     escreva("O Veiculo Funcionou ?:","\n")
	     linhaNaTela()	   	   	
	   	mensagenNaTela()
		leia(resposta)
		se(resposta=="S")
		{    
			linhaNaTela()
			escreva("Então vá para Escola :","\n")
			
		}
		senao se(resposta=="N")
		{
		  verificaBateria()
	     }	     
	     senao	     
	     {
	     	mensagenNaSenao()
	     }
	
	}

      funcao verificaBateria()
 {
     	cadeia resposta
     	linhaNaTela()
     	escreva("Verificar Sinalizador De Bateria No Painel :","\n")
     	escreva("Tem Sinal ?","\n")
     	linhaNaTela()
     	mensagenNaTela()
     	leia(resposta)
		se(resposta=="S")
		{
			verificaCombustivel()			
		}
		senao se(resposta=="N")
		{
			ligaNoMecanico()
		}
	     senao
	     {
	     	mensagenNaSenao()
	     }    	
     }

      funcao verificaCombustivel()
     {     	
     	cadeia resposta
     	linhaNaTela()
     	escreva("Verificar Nivel de combustivel no painel :","\n")
     	escreva("Tem Combustivel ?","\n")
     	linhaNaTela()
     	mensagenNaTela()
     	leia(resposta)
		se(resposta=="S")
		{
			moverVeiculo()			 
			
		}
		senao se(resposta=="N")
		{
			linhaNaTela()
			escreva("Comprar Combustivel e Colocar no veiculo :","\n")
		     limpa()
		     tentarPartida()
	     }	     
	     senao
	     {
	     	mensagenNaSenao()
	     }
	
     }

      funcao moverVeiculo()
      {
      	
      	cadeia resposta
      	linhaNaTela()
      	escreva("Consegue Mover o Veiculo ? :","\n")
      	linhaNaTela()
		mensagenNaTela()
		leia(resposta)
		se(resposta == "S")
		{			
			levaNoMecanico()
								
		}
		senao se (resposta == "N")
		{
			ligaNoMecanico()		 
		}		
		senao
		{
			mensagenNaSenao()
		}		
      }
              
      funcao levaNoMecanico()
      {     	     	
         linhaNaTela()
         escreva("Leve Seu Veiculo Para A Oficina","\n")
         orcamento()	
      }

      funcao ligaNoMecanico()
      { 
        linhaNaTela() 
        escreva("Ligue Para o Mecãnico para Analisar O Veiculo","\n")
        orcamento()
      }
      
      funcao orcamento()
      {
      	cadeia resposta 
      	linhaNaTela()
      	escreva("Peça Um Orcamento", "\n")
      	escreva("O Orcamento foi aprovado ?", "\n")
      	linhaNaTela()
      	mensagenNaTela()	
     	leia(resposta)
		se(resposta=="S")
		{  
		   linhaNaTela()   
		   escreva("Solicitar O Concerto do veiculo :","\n")
		   linhaNaTela()
		   escreva("Resolveu o Seu problema ?" , "\n")
		   linhaNaTela()
		   mensagenNaTela()
		   leia(resposta)
		  se(resposta=="S")	
		  {
		  	 	
		  	linhaNaTela()
		  	escreva("Então vá para Escola :","\n")
		  	linhaNaTela()		 		  	
		  }
		  senao se (resposta=="N")	
		  {
		  	linhaNaTela()
		  	escreva("Ligue Para o mecanico","\n")
		  }		  
		  senao
	       {
	     	mensagenNaSenao()
	       }	   
			 		
		}
		senao se(resposta=="N")
		{
			linhaNaTela()
			escreva("Começar A Juntar dinheiro Entao:","\n")	
			linhaNaTela()	      
	     }	     
	     senao
	     {
	     	mensagenNaSenao()
	     }		
      	
     }

      
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 3499; 
 * @DOBRAMENTO-CODIGO = [76, 103, 134, 141, 166, 173];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */