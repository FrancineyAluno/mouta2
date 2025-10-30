#include<stdio.h>
#include<stdlib.h>

main(){
    int i,num;

    for(i=0;i<=9;i++){
        if(i%2==0){
            num = 5;
        }else{
            num = 3;
        }
        printf("%d ",num);
    }
}
