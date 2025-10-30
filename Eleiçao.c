#include<stdio.h>
#include<stdlib.h>

void main(){
    int cand,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;

    printf("Qual seu candidato\n1 - Bill Gates\n2 - Steve Jobs\n3 - Allan Turing\n4 - John Von Mewmman\n5 - Branco\n6 - Nulo\n");
    scanf("%d",&cand);
    system("cls");
    while(cand!=0){
        if(cand == 1){
            cont1++;
        }else if(cand==2){
            cont2++;
        }else if(cand==3){
            cont3++;
        }else if(cand==4){
            cont4++;
        }else if(cand==5){
            cont5++;
        }else if(cand==6){
            cont6++;
        }
        printf("Qual seu candidato\n1 - Bill Gates\n2 - Steve Jobs\n3 - Allan Turing\n4 - John Von Mewmman\n5 - Branco\n6 - Nulo\n");
        scanf("%d",&cand);
        system("cls");
    }
    printf("Bill Gates recebeu %d votos\n",cont1);
    printf("Steve Jobs recebeu %d votos\n",cont2);
    printf("Allan Turing recebeu %d votos\n",cont3);
    printf("Jonh Von Newmmam recebeu %d votos\n",cont4);
    printf("%d votos nulos\n",cont5);
    printf("%d votos Branco\n",cont6);
}
