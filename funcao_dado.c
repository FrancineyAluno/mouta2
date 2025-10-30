#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dado(int val){
    srand(time(NULL));
    val =1;
    if(val > 0){
        val = rand()%6+1;
        printf("numero sorteado %d",val);
    }
}

int main(){
    int num,res;
    res = dado(num);

}
