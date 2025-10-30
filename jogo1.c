#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DISTANCIA 50

void exibirStatus(int pos1, int pos2){
	int i;
    // Exibe o status da corrida
    printf("Corredor 1: ");
    for ( i = 0; i < pos1; i++) printf("-");
    printf("1\n");

    printf("Corredor 2: ");
    for (i = 0; i < pos2; i++) printf("-");
    printf("2\n");

    printf("\n");
}

int main() {
    int pos1 = 0, pos2 = 0;
    int passo1, passo2;


    srand(time(NULL));

    printf("Bem-vindo ao Jogo de Corrida!\n");
    printf("Os corredores avan�am aleatoriamente em cada turno.\n");
    printf("Quem chegar primeiro ao final vence.\n");
    printf("Dist�ncia da corrida: %d\n", DISTANCIA);
    printf("\n");

    while (pos1 < DISTANCIA && pos2 < DISTANCIA) {

        passo1 = rand() % 5 + 1; // Avan�a de 1 a 5 unidades
        passo2 = rand() % 5 + 1; // Avan�a de 1 a 5 unidades

        pos1 += passo1;
        pos2 += passo2;

        // Limita a posi��o para n�o ultrapassar a dist�ncia
        if (pos1 > DISTANCIA) pos1 = DISTANCIA;
        if (pos2 > DISTANCIA) pos2 = DISTANCIA;

        // Exibe o status atual
        exibirStatus(pos1, pos2);

        // Pausa para visualiza��o
        printf("Pressione Enter para o pr�ximo turno...\n");
        getchar(); // Aguarda o usu�rio pressionar Enter
    }

    // Determina o vencedor
    if (pos1 >= DISTANCIA && pos2 >= DISTANCIA){
        printf("Empate! Ambos os corredores chegaram ao final ao mesmo tempo!\n");
    } else if (pos1 >= DISTANCIA) {
        printf("Corredor 1 venceu!\n");
    } else {
        printf("Corredor 2 venceu!\n");
    }

    return 0;
}

