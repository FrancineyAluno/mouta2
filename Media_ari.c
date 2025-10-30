#include<stdio.h>
#include<stdlib.h>

main(){
    int i;
    float nota[8],acum=0,media;

    for(i=0;i<=7;i++){
        printf("%d nota",i+1);
        scanf("%f",&nota[i]);

        acum = acum+nota[i];
    }
    media = acum/8;
    printf("Media Aritimetica %.2f",media);
}
