#include<stdio.h>
#include<stdlib.h>

main(){
    int i;
    float acum,nota,media;
    acum=0;
    i=1;

    do{
        printf("Digite a %d nota ",i);
        scanf("%f",&nota);

        acum = acum+nota;
        i++;
    }while(i<=8);
    media = acum/8;
    printf("A media das notas e %.2f",media);
}
