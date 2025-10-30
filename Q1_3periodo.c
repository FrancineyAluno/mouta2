#include<stdio.h>

int main(){
    int i,num[10],pos1,pos2,lim,maior=0,menor=99999;

    printf("Digite o tamanho do vetor");
    scanf("%d",&lim);

    for(i=0;i<lim;i++){
        printf("Digite os valores do vetor");
        scanf("%d",&num[i]);

        if(maior < num[i]){
            maior = num[i];
            pos1 = i;
        }
        if(menor > num[i]){
            menor = num[i];
            pos2 = i;
        }
    }
    printf("O maior valor e %d na posicao %d\n",maior,pos1+1);
    printf("O menor valor e %d na posicao %d",menor,pos2+1);

    return 0;
}
