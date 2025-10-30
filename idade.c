#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int i,idade,cont = 0;
    setlocale(LC_ALL,"portuguese");

    for(i=1;i<=10;i++){
        printf("A idade da primeira pessoa");
        scanf("%d",&idade);

        if(idade >= 18){
            cont++;
        }
    }
    printf("As pessoas com 18 anos ou mais são %d",cont);
}
