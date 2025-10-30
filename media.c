#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 float nota;

int main(void) {

setlocale(LC_ALL, "Portuguese");

    printf("Digite a nota final do aluno (0 a 100): ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 100) {
        printf("Nota inválida\n");
    } else {
        if (nota >= 90) {
            printf("Aprovado com Distinção\n");
        } else if (nota >= 70) {
            printf("Aprovado\n");
        } else if (nota >= 50) {
            printf("Recuperação\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
