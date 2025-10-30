#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int tp_op;

    printf("1 - Saldo\n2 - Extrato\n3 - Saque\n4 - Sair\n");
    scanf("%d",&tp_op);

    switch(tp_op){
        case 1:
            printf("Aqui diria quanto tem em conta");
        break;
        case 2:
            printf("Aqui mostra demondtrativo detalhado do mês ou mais");
        break;
        case 3:
            printf("Você poderia retira parte ou todo o dinheiro");
        break;
        case 4:
            printf("Sair da conta");
        break;
        default:
            printf("Só existe essas 4 opções");
        break;
    }
}
