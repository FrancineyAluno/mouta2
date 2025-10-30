#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    float val_hora,num_aulas,por_inss,val_por,sal_liq,sal_bruto;

    setlocale(LC_ALL,"Portuguese");

    printf("Digite o valor da hora aula\n");
    scanf("%f",&val_hora);
    printf("Digite o número de horas aula\n");
    scanf("%f",&num_aulas);
    printf("Qual a proçentagem do INSS\n");
    scanf("%f",&val_por);

    //salario sem desconto
    sal_bruto = val_hora*num_aulas;
    //desconto do INSS
    por_inss = sal_bruto*val_por/100;
    //salario com o desconto do INSS
    sal_liq = sal_bruto - por_inss;

    printf("O salário liquido é R$ %.2f reais",sal_liq);
}

