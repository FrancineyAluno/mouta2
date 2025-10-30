#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float produt, descont;
char formpag;

int main() {
    printf("Insira o valor do produto: \n");
    scanf("%f", &produt);

    printf("Insira a forma de pagamento:\nV- À vista.\nP- À prazo.\n");
    getchar();  // Limpa o caractere de nova linha que ficou no buffer
    scanf("%c", &formpag);

    descont = produt - produt * (10.0 / 100);

    if ((formpag == 'V') || (formpag == 'v')) {
        printf("Valor com desconto: %.2f\n", descont);
    } else {
        printf("Valor sem desconto: %.2f\n", produt);
    }

    return 0;
}
