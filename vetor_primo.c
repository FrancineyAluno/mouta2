#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j, num;
    char *vet;

    printf("Digite o numero para ver a sequencia de primos\n");
    scanf("%d",&num);

    vet = calloc(num+1,sizeof(char));
    for(i=2;i<=num;i++){
        if(vet[i]==0){
            printf("%d ",i);

            for(j=i;j<=num;j=j+i){
                vet[j]=1;
            }
        }
    }

    free(vet);
}
