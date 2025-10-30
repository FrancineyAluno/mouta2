#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main(){
    int i,num,cont=0;
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");

    for(i=1;i<=10;i++){
        num = rand()%90;

        if(num > 30 && num < 90){
            cont++;
            printf("%d ",num);
        }
    }
    printf("\nSão %d números entre 30 e 90",cont);
}
