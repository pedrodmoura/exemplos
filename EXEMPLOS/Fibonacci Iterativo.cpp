#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    int n, a, b, temp, i;

    // Inicializa��o das vari�veis
    n = 7;
    a = 0;
    b = 1;

    // Loop para calcular os termos da sequ�ncia de Fibonacci
    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    // Exibi��o do resultado
    printf("O %d-esimo termo da sequencia de Fibonacci: %d\n", n, b);

    return 0;
}


