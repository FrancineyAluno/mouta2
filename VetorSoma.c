#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    printf("|----------------------------------------|\n");
    printf("|-------------Soma do Vetor--------------|\n");
    printf("|----------------------------------------|\n");

    setlocale(LC_ALL,"portuguese");
    int vet[5],i,acum = 0;

    for(i=0;i<5;i++){
        printf("Digite o %dº valor do vetor",i+1);
        scanf("%d",&vet[i]);
        acum = acum+vet[i];
    }
    printf("A soma dos valores é %d",acum);
    return 0;
}
