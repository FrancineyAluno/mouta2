#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int num,i;
    setlocale(LC_ALL,"Portuguese");

    printf("Qual tabuada de subtração quer ver de 1 até 10\n");
    scanf("%d",&num);

    if(num > 0 && num<=10){
        for(i=1;i<=10;i++){
            printf("%d - %d = %d\n",num+i,num,i);
        }
    }else{
        printf("Somente nos intervalo de 1 até 10");
    }
}
