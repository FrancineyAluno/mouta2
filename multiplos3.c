#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,acum=0;
    for(i=1;i<=500;i++){
        if(i%2!=0 && i%3==0){
            acum = acum+i;
            printf("%d ",acum);
        }
    }
}
