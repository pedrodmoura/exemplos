#include <stdio.h>

int main() {
    // Declaração de variáveis
    int n, a, b, temp, i;

    // Inicialização das variáveis
    n = 7;
    a = 0;
    b = 1;

    // Loop para calcular os termos da sequência de Fibonacci
    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    // Exibição do resultado
    printf("O %d-esimo termo da sequencia de Fibonacci: %d\n", n, b);

    return 0;
}


