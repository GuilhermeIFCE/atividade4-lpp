#include <stdio.h>

int main() {
    int valor1, valor2, multiplo, calculo;

    scanf("%d %d", &valor1, &valor2);

    if (valor1 > valor2) {
        if (valor1 % valor2 == 0) {
            printf("Sao Multiplos\n");
        }else {
            printf("Nao Sao Multiplos\n");
        }
    }else {
        if (valor2 % valor1 == 0) {
            printf("Sao Multiplos\n");
        }else {
            printf("Nao Sao Multiplos\n");
        }
    }


    return 0;
}
