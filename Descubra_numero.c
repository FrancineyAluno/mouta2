#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int mat[5][5],i,j;

    for(i=0;i<5;i++){
        for(i=0;i<5;i++){
            mat[i][j] = rand()%50+1;
        }
    }
}
