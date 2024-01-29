#include <stdio.h>

// Função para trocar dois elementos
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int lista[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    
    // Algoritmo BubbleSort
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                trocar(&lista[j], &lista[j + 1]);
            }
        }
    }

    // Imprimindo a lista ordenada
    printf("Lista Ordenada: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }

    return 0;
}


