#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float vh_trab=0, v_trab=0, h_trab=0, sal=0, h_ext=0, v_ext=0, vh_ext=0;

int main(){
    setlocale(LC_ALL,"Portuguese");

    printf("Digite as horas trabalhadas\n");
    scanf("%f",&h_trab);
    printf("Digite o valor da hora trabalhada\n");
    scanf("%f",&vh_trab);

    sal = vh_trab*160;
    h_ext = h_trab - 160;
    v_ext = h_ext*vh_trab;
    vh_ext = v_ext+(v_ext*0.5);

    printf("O Salário sem extra é %.2f\n",sal);
    printf("\nO valor das horas extras é %.2f\n",vh_ext);
}
