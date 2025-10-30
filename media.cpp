#include<stdio.h>
#include<stdlib.h>

main(){
    int i,j,cont1=0,cont2=0;
    float nota[5][2],media,soma;

    for(i=0;i<=4;i++){
        printf("aluno %d\n",i+1);
        for(j=0;j<=1;j++){
            printf("%d nota do aluno",j+1);
            scanf("%f",&nota[i][j]);
            soma = soma+nota[i][j];
    }
    	media = soma/2;
        printf("%.2f\n",media);
        if(media>=6 && media <=10){
            cont1++;
        }else if(media>=0 && media < 6){
            cont2++;
        }
        soma = 0;
    }
    printf("aprovados sao %d\n",cont1);
    printf("reprovados sao %d",cont2);
}
