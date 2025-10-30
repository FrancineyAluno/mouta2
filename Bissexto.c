#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"Portuguese");
    int Ano;
    printf("Digite o ano");
    scanf("%d", &Ano);
    if ((Ano % 4 != 0) || (Ano % 100 == 0 && Ano % 400 != 0)){
        printf("%d não é bissexto \n", Ano);
    }else{
        printf("%d é bissexto \n", Ano);
    }
}
