#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float vet[10];
    int i;
    printf("|----------------------------------------|\n");
    printf("|-------------Vetor Reverso--------------|\n");
    printf("|----------------------------------------|\n");
    for(i=0;i<10;i++){
        printf("Digite o %dº valor do vetor",i+1);
        scanf("%f",&vet[i]);
    }
    system("cls");
    for(i=0;i<10;i++){
        printf("Na ordem digitada %.1f\n",vet[i]);
    }
    printf("\n");
    for(i=9;i>=0;i--){
        printf("Na ordem reversa %.1f\n",vet[i]);
    }
}
