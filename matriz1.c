#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int soma=0,soma2=0,linha,coluna, i,j, mat[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    printf("Digite o número da linha");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",mat[i][j]);
            if(i==j){
                soma += mat[i][j];
            }
            if(i+j==4){
                soma2 += mat[i][j];
            }
        }
    printf("\n");
    }
    printf("A soma da diagonal principal é %d\n",soma);
    printf("A soma da diagonal secundária é %d",soma2);
}
