#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    printf("|----------------------------------------|\n");
    printf("|------------Media das Notas-------------|\n");
    printf("|----------------------------------------|\n");

    setlocale(LC_ALL,"portuguese");
    float vet[5],acum = 0,med;
    int i;

    for(i=0;i<5;i++){
        printf("Digite a %d� nota do aluno\n",i+1);
        scanf("%f",&vet[i]);
        acum = acum+vet[i];
    }
    system("cls");
    med = acum/i;
    printf("|----------------------------------------|\n");
    printf("|----------Mostrando as Notas------------|\n");
    printf("|----------------------------------------|\n");
    for(i=0;i<5;i++){
        if(vet[i]<med){
            printf("Os valores menores que a m�dia s�o %.1f\n",vet[i]);
        }else if(vet[i]>med){
            printf("Os valores maoires que a m�dia s�o %.1f\n",vet[i]);
        }
    }
    printf("|----------------------------------------|\n");
    printf("|------Mostrando a Media das Notas-------|\n");
    printf("|----------------------------------------|\n");
    printf("A m�dia dos valores � %.1f",med);

    return 0;
}
