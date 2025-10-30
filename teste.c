#include<stdio.h>
#include<stdlib.h>

int main(){
    char nome[50];
    int idade;

    printf("Digite seu nome\n");
    gets(nome);
    printf("Digite sua idade\n");
    scanf("%d",&idade);

    printf("Seu nome e %s\ne sua idade e %d",nome, idade);
}
