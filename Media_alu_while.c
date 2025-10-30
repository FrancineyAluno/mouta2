#include<stdio.h>
#include<stdlib.h>

main(){
    int i=1,cont1=0,cont2=0;
    float nota1,nota2,media;

    while(i<=5){
        printf("Primeira nota do aluno %d\n ",i);
        scanf("%f",&nota1);
        printf("Segunda nota do aluno %d\n ",i);
        scanf("%f",&nota2);

        media = (nota1+nota2)/2;

        printf("A Media do aluno %d e %.2f",i,media);

        printf("\n");

        i++;

        if(media>=6 && cont1<=10){
            cont1++;
        }else if(media>=0 && media<6){
            cont2++;
        }
    }
    printf("Aprovados %d\nReprovados %d",cont1,cont2);
}
