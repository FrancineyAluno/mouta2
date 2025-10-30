#include<stdio.h>
#include<stdlib.h>

void main(){
    int conta,i;
    float lcred1[2],saldo_atual[2],ncred[2],debito[2];

    for(i=1;i<=2;i++){
        printf("Conta Cliente\n");
        scanf("%d",&conta);
        printf("Limite antigo");
        scanf("%f",&lcred1[i]);
        printf("Seus Debitos");
        scanf("%f",&debito[i]);

        ncred[i] = lcred1[i]/2;
        saldo_atual[i] = ncred[i] - debito[i];

    }
    for(i=1;i<=2;i++){
    printf("Saldo atual do cliente %d ,%.2f\n",conta,saldo_atual[i]);
    }
}
