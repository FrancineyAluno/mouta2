#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int ale,adv;
    srand(time(NULL));
    ale = rand()%11;

    printf("Veja se voc� acerta o n�mero\n");
    scanf("%d",&adv);

    if(ale == adv){
        printf("Acertou Miser�vel");
    }else{
        printf("Pague pra tentar de novo");
    }
    printf("\n%d",ale);
}
