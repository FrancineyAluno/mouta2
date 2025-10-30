#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int idade,i,cont=0,cont1=0,cont2;
    float alt=0,pes=0,media=0,porc=0;

    setlocale(LC_ALL,"Portuguese");

    for(i=1;i<=4;i++){
        printf("Qual a idade da %d pessoa\n",i);
        scanf("%d",&idade);
        printf("Qual a altura da %d pessoa\n",i);
        scanf("%f",&alt);
        printf("Qual o peso da %d pessoa\n",i);
        scanf("%f",&pes);

        if(idade > 50){
            cont++;
        }
        if(idade>10 && idade<20){
            cont1++;
            media = media+alt;
        }
        if(pes<40 && pes>0){
            cont2++;
        }
    }
    porc = cont2*100/i;
    printf("Os que tem mais de 50 nos são %d\n",cont);
    printf("A média da altura dos entre 10 e 20 naos é %.2f\n",media/cont);
    printf("A porcetagem de pessoas com menos de 40 quilos é %.2f ",porc);
}
