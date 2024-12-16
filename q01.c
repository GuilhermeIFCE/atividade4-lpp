#include <stdio.h>

int main() {
    int n, resultado;

    scanf("%d", &n);

    if(n % 2 == 0){
        resultado = 0;
    }else{
        resultado = 1;
    }

    printf("O resultado da soma eh: %d\n", resultado);

    return 0;
}
