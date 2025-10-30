#include<stdio.h>
int main(){
    int i,j;
    float v_monet[5][5],med1=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite o valor do %d cliente\n",i+1);
            scanf("%f",&v_monet[i][j]);

                med1=med1+v_monet[i][j];
        }
        printf("O valor da media e de %.2f\n",med1/5);
        med1 =0;
    }
}
