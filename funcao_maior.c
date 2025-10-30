#include<stdio.h>
#include<stdlib.h>

int maior(int val1,int val2,int val3){
    if(val1 > val2 && val1 > val3){
        printf("O %d e o maior\n",val1);
    }else if(val2 > val1 && val2 > val3){
        printf("O %d e o maior\n",val2);
    }else{
        printf("O %d e o maior\n",val3);
    }
}
int main(){
    int num1,num2,num3;
    int res;

    printf("Digite o primeiro valor\n");
    scanf("%d",&num1);
    printf("Digite o segundo valor\n");
    scanf("%d",&num2);
    printf("Digite o terceiro valor\n");
    scanf("%d",&num3);

    res = maior(num1,num2,num3);
}
