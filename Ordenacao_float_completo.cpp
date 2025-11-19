#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Bubble Sort
void bubbleSort(float array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++)
        for (int j = 0; j < tamanho - i - 1; j++)
            if (array[j] > array[j + 1]) {
                float temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
}

// Selection Sort
void selectionSort(float array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < tamanho; j++)
            if (array[j] < array[min_idx])
                min_idx = j;
        float temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }
}

// Insertion Sort
void insertionSort(float array[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        float key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

// Quick Sort
int partition(float array[], int low, int high) {
    float pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (array[j] < pivot) {
            i++;
            float temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    float temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;
    return (i + 1);
}

void quickSort(float array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Merge Sort
void merge(float array[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    float* L = (float*)malloc(n1 * sizeof(float));
    float* R = (float*)malloc(n2 * sizeof(float));

    for (int i = 0; i < n1; i++) L[i] = array[l + i];
    for (int j = 0; j < n2; j++) R[j] = array[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) array[k++] = L[i++];
        else array[k++] = R[j++];
    }

    while (i < n1) array[k++] = L[i++];
    while (j < n2) array[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(float array[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
}

// Heap Sort
void heapify(float array[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && array[l] > array[largest]) largest = l;
    if (r < n && array[r] > array[largest]) largest = r;

    if (largest != i) {
        float temp = array[i];
        array[i] = array[largest];
        array[largest] = temp;
        heapify(array, n, largest);
    }
}

void heapSort(float array[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(array, n, i);

    for (int i = n - 1; i > 0; i--) {
        float temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        heapify(array, i, 0);
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
    printf("4 - Quick Sort\n");
    printf("5 - Merge Sort\n");
    printf("6 - Heap Sort\n");
    printf("Digite sua escolha: ");
    scanf("%d", &algoritmo);

    float* array = (float*)malloc(tamanho * sizeof(float));
    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        array[i] = rand()%500000;
    }

    printf("\nArray original (primeiros 10): ");
    for (int i = 0; i < (tamanho < 500000 ? tamanho : 500000); i++) {
        printf("%.0f ", array[i]);
    }
    if (tamanho > 10) printf("...");
    printf("\n");

    clock_t inicio = clock();

    switch (algoritmo) {
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
        case 4:
            printf("\nExecutando Quick Sort...\n");
            quickSort(array, 0, tamanho - 1);
            break;
        case 5:
            printf("\nExecutando Merge Sort...\n");
            mergeSort(array, 0, tamanho - 1);
            break;
        case 6:
            printf("\nExecutando Heap Sort...\n");
            heapSort(array, tamanho);
            break;
        default:
            printf("Algoritmo inválido!\n");
            free(array);
            return 1;
    }

    clock_t fim = clock();
    double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("\nArray ordenado (primeiros 10): ");
    for (int i = 0; i < (tamanho < 500000 ? tamanho : 500000); i++) {
        printf("%.0f ", array[i]);
    }
    if (tamanho > 10) printf("...");
    printf("\n");

    printf("\nTempo de execução: %.3f segundos\n", tempo);
    printf("Elementos ordenados: %d\n", tamanho);

    free(array);
    return 0;
}


