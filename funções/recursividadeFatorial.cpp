#include <stdio.h>

int fatorial(int n) {
    if (n == 0) { // caso base
        return 1;
    } else { // passo recursivo
    	printf("%d ", n);
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero = 5; // Exemplo: calculando o fatorial de 5
    int resultado = fatorial(numero);
    printf("O fatorial de %d e %d\n", numero, resultado);
    return 0;
}

