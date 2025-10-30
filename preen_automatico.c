#include<stdio.h>
#include<stdlib.h>

main(){
    int i,num[7];

    for (i=1;i<=7;i++){
        num[i] = rand()%100;
        printf("%d ",num[i]);
    }
}
