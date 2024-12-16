#include <stdio.h>

int main() {
    int nota1, nota2, media, calculo;

    scanf("%d %d", &nota1, &media);

    if(nota1 >= 0 && nota1 <= 100 && media >= 0 && media <= 100){
        calculo = media * 2;
        nota2 = calculo - nota1;
        printf("Sua segunda nota eh: %d\n", nota2);
    }else{
        printf("Nao inseriu valor valido.\n");
    }

    return 0;
}
