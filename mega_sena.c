#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i,j, num[10];
    char rep;

    printf("gerando 6 números aleatórios de 1 ate 60\n");
    srand(time(NULL));
    for(i=1;i<=6;i++){
        num[i] = rand()%60+1;
        rep = 'n';
        for(j=1;j<i && rep == 'n';j++){
            if(num[i] == num[j]){
                rep = 's';
            }
        }
        if(rep == 's'){
            i--;
        }
    }

    for(i=1;i<=6;i++){
        printf("%d\n",num[i]);
    }
    return 0;
}
