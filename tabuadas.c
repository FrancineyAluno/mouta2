#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,j,op;
    printf("Qual a operacao\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nou 0 para sair\n");
    scanf("%d",&op);
    system("cls");
    while(op!=0){
        if(op==1){
             for(i=1;i<=10;i++){
                for(j=1;j<=5;j++){
                    printf("%d + %d = %d\t",i,j,i+j);
                }
            printf("\n");
            }
            printf("\n");
            for(i=1;i<=10;i++){
                for(j=6;j<=10;j++){
                    printf("%d + %d = %d\t",i,j,i+j);
                }
            printf("\n");
            }
        }else if(op==2){
            for(i=1;i<=10;i++){
                for(j=1;j<=5;j++){
                    printf("%d - %d = %d\t",i+j,j,i);
                }
            printf("\n");
            }
            printf("\n");
            for(i=1;i<=10;i++){
                for(j=6;j<=10;j++){
                    printf("%d - %d = %d\t",i+j,j,i);
                }
            printf("\n");
            }
        }else if(op==3){
            for(i=1;i<=10;i++){
                for(j=1;j<=5;j++){
                    printf("%d x %d = %d\t",i,j,i*j);
                }
            printf("\n");
            }
            printf("\n");
            for(i=1;i<=10;i++){
                for(j=6;j<=10;j++){
                    printf("%d x %d = %d\t",i,j,i*j);
                }
            printf("\n");
            }
        }else if(op==4){
            for(i=1;i<=10;i++){
                for(j=1;j<=5;j++){
                    printf("%d / %d = %d\t",i*j,j,i);
                }
            printf("\n");
            }
            printf("\n");
            for(i=1;i<=10;i++){
                for(j=6;j<=10;j++){
                    printf("%d / %d = %d\t",i*j,j,i);
                }
            printf("\n");
            }
        }
        printf("Qual a operacao\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nou 0 para sair\n");
        scanf("%d",&op);
        system("cls");
    }
}
