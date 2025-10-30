#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i;
    float nota1[9],nota2[9],nota3[9],media[9];

    for(i=1;i<=3;i++){
        printf("Digite a nota 1 do aluno %d\n",i);
        scanf("%f",&nota1[i]);
        printf("Digite a nota 2 do aluno %d\n",i);
        scanf("%f",&nota2[i]);
        printf("Digite a nota 3 do aluno %d\n",i);
        scanf("%f",&nota3[i]);

        media[i] = (nota1[i] + nota2[i] + nota3[i])/3;


    }
    for(i=1;i<=3;i++){
        printf(" A media do aluno %d e %.2f\n",i,media[i]);
    }
}
