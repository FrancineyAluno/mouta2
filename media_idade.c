#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int i,idade,acum1=0,acum2=0,acum3=0,cont=0,cont1=0;
    float med1,med2,med;
    char sex;

    setlocale(LC_ALL,"Portuguese");

    for(i=1;i<=4;i++){
        printf("Sexo da %d pessoa\n",i);
        scanf("%s",&sex);
        printf("A idada da %d pessoa\n",i);
        scanf("%d",&idade);

        acum1 = (acum1+idade);

        if(sex == 'm'){
            acum2 = acum2+idade;
            cont++;
        }else if(sex == 'f'){
            acum3 = acum3+idade;
            cont1++;
        }
    }
    med = acum1/i;
    med1 = acum2/cont;
    med2 = acum3/cont1;
    printf("A média do grupo é %.2f\n",med);
    printf("A média do sexo masculino é %.2f\n",med1);
    printf("A média do sexo femenino é %.2f\n",med2);
}
