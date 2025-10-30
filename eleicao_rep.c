#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int cand,cont1 = 0,cont2 = 0,cont3 = 0,cont4 = 0,tvotos = 0, vval = 0;
    double porc70 = 0,porc22 = 0,branco = 0,nulo = 0;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite o número do seu candidto\n70 - David\n22 - Alberto\n1 - Nulo\n2 - Branco");
    scanf("%d",&cand);
    system("cls");
    while(cand != 7022){
        if(cand == 70){
            cont1++;
        }else if(cand == 22){
            cont2++;
        }else if(cand == 1){
            cont3++;
        }else if(cand == 2){
            cont4++;
        }else{
            while(cand !=70 && cand != 22 && cand != 1 && cand != 2 && cand!=7022){
            printf("candidato inválido\n70 - David\n22 - Alberto\n1 - Nulo\n2 - Branco");
            scanf("%d",&cand);
                if(cand == 70){
                    cont1++;
                }else if(cand == 22){
                    cont2++;
                }else if(cand == 1){
                    cont3++;
                }else if(cand == 2){
                    cont4++;
                }
            system("cls");
            }
        }
        printf("Digite o número do seu candidto\n70 - David\n22 - Alberto\n1 - Nulo\n2 - Branco");
        scanf("%d",&cand);
        system("cls");

        tvotos++;
        porc22 = (cont2*100)/tvotos;
        porc70 = (cont1*100)/tvotos;
        nulo = (cont3*100)/tvotos;
        branco = (cont4*100)/tvotos;

    }
    printf("O números de votos para David %d\npercentual %.2f %%\n",cont1,porc70);
    printf("O números de votos para Alberto %d\npercentual %.2f %%\n",cont2,porc22);
    printf("Votos em nulos %d\npercentual de nulos %.2f %%\n",cont3,nulo);
    printf("Votos em branco %d\npercentual de brancos %.2f %%",cont4,branco);

}
