#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char sexo;
    int acum=0,idade,cont1=0,maior=0,menor=999,op,i = 1,aux;
    float sal,media;

    printf("1 - para come�ar\n0 - para sair\n");
    scanf("%d",&op);
    system("cls");
    fflush(stdin);


    while(op!=0 && op ==1){
        printf("Qual o sexo da %d pessoa",i);
        scanf("%c",&sexo);
        printf("idade da %d pessoa",i);
        scanf("%d",&idade);
        printf("O sal�rio da %d pessoa",i);
        scanf("%f",&sal);

        system("cls");

        acum = acum+sal;
        media = acum/i;
        i++;

        if(maior < idade){
            maior = idade;
        }
        if(menor > idade){
            menor = idade;
        }
        if(sexo == 'f' && sal <=1500){
            cont1++;
        }

        do{
            printf("1 - para continuar\n0 - para sair");
            scanf("%d",&op);
            system("cls");
            fflush(stdin);
        }while(op!=0 && op!=1);
    }
    printf("A media de sal�rio � %.2f\n",media);
    printf("A maior idade � %d e a menor idade � %d\n",maior,menor);

    if(cont1==1){
        printf("Apenas %d mulher que recebe at� 1500,00",cont1);
    }else if(cont1 > 1){
        printf("S�o %d mulheres que recebem at� 1500,00",cont1);
    }else{
        printf("Nenhuma mulher est� recebendo abaixo de 1500");
    }
}
