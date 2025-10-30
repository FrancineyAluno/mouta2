#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i;
    float acum=0,val,luc=0;
    char nome[30];

    for(i=1;i<=5;i++){
        printf("Nome do cliente %d\n",i);
        gets(nome);
        printf("Valor do investimnto\n");
        scanf("%f",&val);

        acum = acum+val;
        getchar();
    }
    if(acum > 54000){
        luc = acum - 54000;
        printf("O faturamento da loja A foi de %.2f a mais que a loja B",luc);
    }else if(acum == 54000){
        printf("O faturamento foi igual");
    }else{
        printf("O faturmento foi menor");
    }
}
