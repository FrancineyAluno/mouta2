#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    printf("|----------------------------------------|\n");
    printf("|----------Soma de dois vetores----------|\n");
    printf("|----------------------------------------|\n");

    setlocale(LC_ALL,"portuguese");
    int vet1[4],vet2[4],vets[4],i;

    for(i=0;i<4;i++){
        printf("Digite o %d do primeiro vetor",i+1);
        scanf("%d",&vet1[i]);
    }
    for(i=0;i<4;i++){
        printf("Digite o %d do segundo vetor",i+1);
        scanf("%d",&vet2[i]);
    }
    for(i=0;i<4;i++){
        vets[i] = vet1[i]+vet2[i];
    }
    for(i=0;i<4;i++){
        printf("A soma das %d posições do vetor é %d\n",i+1,vets[i]);
    }
}
