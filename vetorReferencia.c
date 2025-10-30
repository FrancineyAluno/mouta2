#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int vet[10];
    int i,numref,cont=0;
    printf("|----------------------------------------|\n");
    printf("|------------Vetor Referencia------------|\n");
    printf("|----------------------------------------|\n");

    for(i=0;i<10;i++){
        printf("Digite o %dº valor do vetor",i+1);
        scanf("%d",&vet[i]);
    }
    printf("\n");
    printf("Digite o valor referencia");
    scanf("%d",&numref);

    system("cls");
    for(i=0;i<10;i++){
        if(vet[i] > numref){
            printf("O valor %d é maoir que o referencia\n",vet[i]);
        }
    }
    printf("\n");
    for(i=0;i<10;i++){
        if(vet[i] < numref){
            printf("O valor %d é menor que o referencia\n",vet[i]);
        }
    }
    printf("\n");
    for(i=0;i<10;i++){
        if(vet[i] == numref){
            cont++;
        }
    }
    printf("Os valor de referencia aparece %d vezes",cont);
}


