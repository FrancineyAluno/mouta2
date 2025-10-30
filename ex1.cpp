#include<stdio.h>
#include<stdlib.h>
#include<String.h>
int main(){
    int valor, h, m, s;
    char usu[1];
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("O valor digitado corresponde a horas[h], minutos[m] ou segundos[s]?: ");
    scanf("%c", &usu);
    h = valor/3600;
    m = (valor%3600)/60;
    s = valor%60;
    if(strcmp(usu, 'h')== 0){
        printf("Você escolheu HORAS.");
        printf("O valor digitado corresponde a %d minutos e %d segundos.", m, s);
    }else{
        if(strcmp(usu, 'm')== 1){
            printf("Você escolheu MINUTOS.");
            printf("O valor digitado corresponde a %d horas e %d minutos.", h, s);
        }else{
            if(strcmp(usu, 's')== 2){
                printf("Você escolheu SEGUNDOS.");
                printf("O valor digitado corresponde a %d horas e %d minutos.", h, m);
            }else{
            }
        }
    }
    getchar();
}
