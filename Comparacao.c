#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int ale,adv;
    srand(time(NULL));
    ale = rand()%11;

    printf("Veja se você acerta o número\n");
    scanf("%d",&adv);

    if(ale == adv){
        printf("Acertou Miserável");
    }else{
        printf("Pague pra tentar de novo");
    }
    printf("\n%d",ale);
}
