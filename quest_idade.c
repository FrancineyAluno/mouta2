#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,idade;
    float porc1=0;

    for(i=1;i<=5;i++){
        printf("A idade da %d pessoa",i);
        scanf("%d",&idade);

        if(idade>0 && idade<=15){
            cont1++;
        }else if(idade>=16 && idade<=30){
            cont2++;
        }else if(idade>=31 && idade<=45){
            cont3++;
        }else if(idade>=46 && idade<=60){
            cont4++;
        }else if(idade<=51 && idade<=120){
            cont5++;
        }
    }
    printf("%d\n",cont1);
    porc1=((float)cont1/(i-1))*100;
    printf("A idade até 15 anos é %d pessoas\n",cont1);
    printf("A porcentagem nas faixas etárias são %.2f",porc1);
}
