#include<stdio.h>
#include <locale.h>

int main() {
    int i,num;
    printf("Digite o numero para ver se e primo\n");
    scanf("%d",&num);

    if(num<=1){
        printf("Nao e primo");
    }else{
        for(i=2;i<num;i++){
            if(num%i==0){
                 printf("Nao e primo");
                 break;
            }
        }
        if(i==num){
             printf("Primo");
        }
    }
}
