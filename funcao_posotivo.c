#include<stdio.h>
#include<stdlib.h>


int main(){
    int num = 0,fun;
    printf("Digite um valor\n");
    scanf("%d",&num);

    fun = positivo(num);
}

int positivo(int num2){

    if(num2>0){
        printf("Positivo");
    }else if(num2<0){
        printf("Negativo");
    }else{
        printf("Neutro");
    }
}
