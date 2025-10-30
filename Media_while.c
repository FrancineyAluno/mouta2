#include<stdio.h>
#include<stdlib.h>

main(){
    int i;
    float nota,media,acum=0;
    i=1;

    while(i<=8){
        printf("Digite a %d nota ",i);
        scanf("%f",&nota);

        acum = acum+nota;
        i++;
    }
    media = acum/(i-1);
    printf("A media das notas e %.2f",media);
}
