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