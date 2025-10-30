#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int a,b,c;

    setlocale(LC_ALL,"Portuguese");

    printf("Primeiro valor\n");
    scanf("%d",&a);
    printf("Seundo valor\n");
    scanf("%d",&b);
    printf("Terceiro valor\n");
    scanf("%d",&c);
    system("cls");

    printf("Valores na ordem\n %d, %d, %d\n",a,b,c);

    if(a>b && a>c && b>c){
        printf("crescente\n %d, %d, %d\n",c,b,a);
        printf("Decrescente\n %d, %d, %d",a,b,c);
    }else if(a>b && a>c && c>b){
        printf("crescente\n %d, %d, %d\n",b,c,a);
        printf("Decrescente\n %d, %d, %d",a,c,b);
    }else if(b>a && b>c && a>c){
        printf("crescente\n %d, %d, %d\n",c,a,b);
        printf("Decrescente\n %d, %d, %d",b,a,c);
    }else if(b>a && b>c && c>a){
        printf("crescente\n %d, %d, %d\n",a,c,b);
        printf("Decrescente\n %d, %d, %d",b,c,a);
    }else if(c>a && c>b && b>a){
        printf("crescente\n %d, %d, %d\n",a,b,c);
        printf("Decrescente\n %d, %d, %d",c,b,a);
    }else if(c>a && c>b && a>b){
        printf("crescente\n %d, %d, %d\n",b,a,c);
        printf("Decrescente\n %d, %d, %d",c,a,b);
    }else{
        printf("Tem números repetidos");
    }
}
