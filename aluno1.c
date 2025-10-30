#include<stdio.h>

main(){
    char nome[30];
    float n[3],acum,media;
    int i,ano_nasc,ano_atual,idade;

    printf("Nome do aluno\n");
    scanf("%s",&nome);
    printf("Qual o ano de nascimento\n");
    scanf("%d",&ano_nasc);
    printf("Ano atual\n");
    scanf("%d",&ano_atual);

    for(i=0;i<=2;i++){
        printf("Digite a %d nota\n",i+1);
        scanf("%f",&n[i]);
    }

    idade = ano_atual-ano_nasc;
    media = (n[0]+(n[1])*3+n[2]*5)/9;
    system("cls");

    for(i=0;i<=2;i++){
        printf("A %d nota e %.1f\n",i+1,n[i]);
    }

    printf("O %s tem %d anos e a media e %.1f ",nome,idade,media);
}
