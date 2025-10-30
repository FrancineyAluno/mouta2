#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"Portuguese");

    float km_per,litros,km_quant=0;

        printf("Quantos kilometros pecorridos");
        scanf("%f",&km_per);
        printf("quantos litros foram usados");
        scanf("%f",&litros);

        km_quant = km_per/litros;

        printf("O veículo tem média de %.2f litros por kilometro",km_quant);
}
