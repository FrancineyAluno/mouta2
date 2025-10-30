#include<stdio.h>
#include<stdlib.h>

int mult(int n1, int n2){
    int res;
    res = n1*n2;
    return res;
}

int main(){
    int v1,v2,res2;

    printf("Digite o primeiro valor");
    scanf("%d",&v1);
    printf("Digite o segundo valor");
    scanf("%d",&v2);
    res2 = mult(v1,v2);

    printf("O resultado e %d",res2);
return 0;
}
