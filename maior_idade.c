#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int idade,cont=0,op;
    setlocale(LC_ALL,"Portuguese");
    do{
        printf("1 - para iniciar\n0 - para sair");
        scanf("%d",&op);
    }while(op!=0 && op!=1);
    system("cls");
        while(op!=0 && op==1){
            printf("Quantos anos você tem");
            scanf("%d",&idade);
            if(idade > 17){
                cont++;
            }
            do{
                printf("1 - para continuar\n0 - para sair");
                scanf("%d",&op);
            }while(op!=0 && op!=1);
        system("cls");
        }
    printf("Tem %d pessoas maiores de 18 anos",cont);
}
