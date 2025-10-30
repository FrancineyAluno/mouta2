#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int delta(int a, int b, int c){
    int res;
    res = pow(b,2)-4*a*c;
    printf("O delta da funcao e %d\n",res);
}
int main(){
    int num1,num2,num3,val;
    printf("Digite o primeiro valor\n");
    scanf("%d",&num1);
    printf("Digite o segundo valor\n");
    scanf("%d",&num2);
    printf("Digite o terceiro valor\n");
    scanf("%d",&num3);

    val = delta(num1,num2,num3);
}
