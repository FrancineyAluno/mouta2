#include<stdio.h>
#include<stdlib.h>

int mult(int num,int i){
    int res;
    res = num*i;

}

int main(){
    int i,op,res2;
    printf("Digite a tabuada desejada\n");
    scanf("%d",&op);
    for(i=1;i<=10;i++){
        res2 = mult(op,i);
        printf("%d x %d = %d\n",i,op,res2);
    }
}
