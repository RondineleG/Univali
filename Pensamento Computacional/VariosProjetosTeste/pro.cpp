#include <stdio.h>
 
main() {
int idade,y=0,x=0,num=0;
float media;
char sexo;
 
do {
 
printf("Qual seu sexo? ");
scanf("%c",&sexo);
 
if(sexo=='m'){
y=y+1;
printf("Qual sua idade? ");
scanf("%d",&idade);
x = x + idade;
media = x/y;
}
else if(sexo=='f'){
num=num+1;
printf("Qual sua idade? ");
scanf("%d",&idade);
}
 
}while(sexo!='w');
 
printf("A media das idades do sexo ''m'': %.1f.\n\n",media);
printf("A quantidade de pessoas do sexo ''f'': %d.\n\n",num);
 

 
}
