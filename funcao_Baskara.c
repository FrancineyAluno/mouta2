#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float baskara(int a,int b,int c){
    int res,res1;

    if(a!=0){
        res = (-b+(sqrt(pow(b,2)-4*a*c)))/2*a;
        res1 = (-b-(sqrt(pow(b,2)-4*a*c)))/2*a;

        printf("O x' e %d e o x'' e %d",res,res1);
    }else{
        printf("Nao e uma equacao de 2 grau");
    }
}

int main(){
    int num1,num2,num3;
    int val1;

    printf("Digite o primeiro valor\n");
    scanf("%d",&num1);
    printf("Digite o segundo valor\n");
    scanf("%d",&num2);
    printf("Digite o terceiro valor\n");
    scanf("%d",&num3);

    val1 = baskara(num1,num2,num3);
}
