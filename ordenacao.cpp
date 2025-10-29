#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Algoritmos de ordenação (mesmas funções anteriores)
void bubbleSort(int array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++)
        for (int j = 0; j < tamanho - i - 1; j++)
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
}

void selectionSort(int array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < tamanho; j++)
            if (array[j] < array[min_idx])
                min_idx = j;
        int temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }
}

void insertionSort(int array[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main() {
    int tamanho, algoritmo;
    
    printf("=== SISTEMA SIMPLES DE ORDENAÇÃO ===\n\n");
    
    printf("Quantos elementos deseja ordenar? ");
    scanf("%d", &tamanho);
    
    printf("\nEscolha o algoritmo:\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Insertion Sort\n");
    printf("Digite sua escolha: ");
    scanf("%d", &algoritmo);
    
    // Cria e preenche o array
    int* array = malloc(tamanho * sizeof(int));
    srand(time(NULL));
    
    for (int i = 0; i < tamanho; i++) {
        array[i] = rand() % 1000;
    }
    
    printf("\nArray original (primeiros 10): ");
    for (int i = 0; i < (tamanho < 10 ? tamanho : 10); i++) {
        printf("%d ", array[i]);
    }
    if (tamanho > 10) printf("...");
    printf("\n");
    
    // Executa o algoritmo escolhido
    clock_t inicio = clock();
    
    switch(algoritmo) {
        case 1:
            printf("\nExecutando Bubble Sort...\n");
            bubbleSort(array, tamanho);
            break;
        case 2:
            printf("\nExecutando Selection Sort...\n");
            selectionSort(array, tamanho);
            break;
        case 3:
            printf("\nExecutando Insertion Sort...\n");
            insertionSort(array, tamanho);
            break;
        default:
            printf("Algoritmo inválido!\n");
            free(array);
            return 1;
    }
    
    clock_t fim = clock();
    double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    
    printf("\nArray ordenado (primeiros 10): ");
    for (int i = 0; i < (tamanho < 10 ? tamanho : 10); i++) {
        printf("%d ", array[i]);
    }
    if (tamanho > 10) printf("...");
    printf("\n");
    
    printf("\nTempo de execução: %.2f segundos\n", tempo);
    printf("Elementos ordenados: %d\n", tamanho);
    
    free(array);
    return 0;
}
