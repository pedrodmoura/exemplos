#include <stdio.h>

// Fun��o para mesclar dois subarrays ordenados
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;  // Tamanho do subarray da esquerda
    int n2 = r - m;      // Tamanho do subarray da direita

    // Cria��o de arrays tempor�rios para armazenar os subarrays
    int L[n1], R[n2];

    // Copia os elementos para os subarrays tempor�rios L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // �ndices iniciais para os subarrays tempor�rios L[], R[] e �ndice para o array original arr[]
    i = 0;
    j = 0;
    k = l;

    // Combina os subarrays de volta em arr[l..r]
    while (i < n1 && j < n2) {
        // Compara��o e mesclagem dos elementos
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver algum
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver algum
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fun��o principal que implementa o Merge Sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Encontra o ponto m�dio do array
        int m = l + (r - l) / 2;

        // Chama recursivamente mergeSort para a primeira metade
        mergeSort(arr, l, m);

        // Chama recursivamente mergeSort para a segunda metade
        mergeSort(arr, m + 1, r);

        // Mescla as duas metades ordenadas
        merge(arr, l, m, r);
    }
}

// Fun��o de utilidade para imprimir um array de tamanho n
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Exemplo de uso
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // Imprime o array original
    printf("Array original: ");
    printArray(arr, arr_size);

    // Chama a fun��o mergeSort para ordenar o array
    mergeSort(arr, 0, arr_size - 1);

    // Imprime o array ordenado
    printf("Array ordenado: ");
    printArray(arr, arr_size);

    return 0;
}

