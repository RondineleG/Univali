#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int idade, totalm = 0, totalf = 0, totalff = 0;
    char sexo;
    float media_idade = 0;

    printf( "Digite a idade da pessoa: \n" );
    scanf( "%d", &idade );

    while( idade != 0 )
    {

        printf( "Digite o sexo da pessoa:\n" );
        fflush(stdin);
        scanf( "%c", &sexo );

        if( sexo == 'm' || sexo == 'M' )
            totalm = totalm + 1;

        if( sexo == 'f' || sexo == 'F' )
        {
            totalf = totalf + 1;

           
        }

        media_idade = media_idade + idade;

        printf( "Digite a idade da pessoa: \n" );
        scanf( "%d", &idade );

    }
    
    printf( "O total de pessoas do sexo masculino e: %d\n", totalm );
    printf( "O total de pessoas do sexo feminino entre 30 e 45 anos e: %d\n", totalf );

    system( "PAUSE" );
    return 0;
}
