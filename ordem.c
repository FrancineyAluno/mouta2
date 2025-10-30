#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[10],i;
    printf("|----------------------------------------|\n");
    printf("|-----------Listagem numerada------------|\n");
    printf("|----------------------------------------|\n");

    for(i=0;i<10;i++){
        printf("Digite o %d valor\n",i+1);
        scanf("%d",&vet[i]);
    }
    system("cls");
    for(i=0;i<10;i++){
        printf("O %d digitado foi %d\n",i+1,vet[i]);
    }
    return(0);
}
