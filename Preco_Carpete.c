#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    float comp_sala,larg_sala,pre_mt,pre_total,comp_total;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite o comprimento da sala\n");
    scanf("%f",&comp_sala);
    printf("Digite a largura da sala\n");
    scanf("%f",&larg_sala);
    printf("Digite o valor do metro quadrado do carpete\n");
    scanf("%f",&pre_mt);

    comp_total = comp_sala*larg_sala;
    pre_total = comp_total*pre_mt;

    printf("O valor total em metros quadrados é R$ %.2f",pre_total);

}
