#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int lado1,lado2,lado3;

    printf("Tipos de triangulos\n\n\n");
    printf("Primeiro Lado\n");
    scanf("%d",&lado1);
    printf("Segundo Lado\n");
    scanf("%d",&lado2);
    printf("Terceiro Lado\n");
    scanf("%d",&lado3);

    if(lado1+lado2 >= lado3 && lado1+lado3 >= lado2 && lado2+lado3 >=lado1){
        if(lado1 == lado2 && lado1 == lado3){
            printf("Triangulo Equilatero");
        }else if((lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado2 !=lado3) || (lado2 == lado3 && lado1 != lado2)){
            printf("Triangulo Escaleno");
        }else{
            printf("Triangulo Isosceles");
        }
    }else{
        printf("Nao é um triâgulo");
    }
}
