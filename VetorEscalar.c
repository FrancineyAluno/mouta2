#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int vetx[10],vety[10],vetxy[10],i;

    printf("|----------------------------------------|\n");
    printf("|-------------Vetor Escalar--------------|\n");
    printf("|----------------------------------------|\n");
    //entrada de dados
    for(i=0;i<10;i++){
        printf("Digite o %dº dos 10 do vetorX ",i+1);
        scanf("%d",&vetx[i]);
    }
    for(i=0;i<10;i++){
         printf("Digite o %dº dos 10 do vetorY ",i+1);
        scanf("%d",&vety[i]);
    }
    system("cls");
    //processamento
    for(i=0;i<10;i++){
        vetxy[i] = vetx[i]*vety[i];
    }
    //saida
    for(i=0;i<10;i++){
        printf("O valor escalar entre X[%d] x Y[%d] é %d\n",i+1,i+1,vetxy[i]);
    }

}

