#include <stdio.h>


int main ()
{
    const int bimestresAnuais = 30;
    const int numeroDeAlunos = 4;


    float notasAlunos[numeroDeAlunos][bimestresAnuais];
    float mediasAlunos[numeroDeAlunos];

    float media =0;

    printf("Insira as 4 Notas do aluno 1:\n");

    for(int aluno = 0; aluno < numeroDeAlunos; ++aluno)
    {
        for (int notas =0; notas < bimestresAnuais; ++notas)
        {
            scanf("%f",&notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];

        }
         mediasAlunos[aluno] = media / bimestresAnuais;
         media = 0;

         printf("Insira as 4 notas do aluno %i:\n", aluno +2);

        return 0;
    }
}
