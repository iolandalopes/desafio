#include <stdio.h>
#include <math.h>

int verificaQuadradoPerfeito(int numero) {
    int raiz = (int) sqrt(numero);
    return (raiz * raiz == numero);
}

int pertenceAFibonacci(int numero) {

    int expr1 = 5 * numero * numero + 4;
    int expr2 = 5 * numero * numero - 4;

    return verificaQuadradoPerfeito(expr1) || verificaQuadradoPerfeito(expr2);
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    } else if (pertenceAFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
