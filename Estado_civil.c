#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char est;

    printf("Digite a inicial que diz seu estado civil\n ");
    printf("s - solteiro.\n c - casado.\n ");
    printf("d - divorciado.\n v - vi�vo\n");
    scanf("%c",&est);

    switch(est){
        case 's':
            printf("Solteiro");
        break;
        case 'c':
            printf("Casado");
        break;
        case 'd':
            printf("Divorciado");
        break;
        case 'v':
            printf("Vi�vo");
        break;
        default:
            printf("Sele��o inv�lida");
    }

}
