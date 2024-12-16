#include <stdio.h>

int main() {
    float salario, imposto, impostoCalculado;

    scanf("%f", &salario);

    if(salario == 3002) {

        imposto = (1000 * 0.08) + (2 * 0.18);
        printf("O imposto a ser pago eh: %.2f\n", imposto);

    }else if(salario > 0 && salario <= 2000){

        printf("Isento!\n");

    }else if(salario >= 2000.01 && salario <= 3000){

        imposto = (salario - 2000) * 0.08;
        printf("O imposto a ser pago eh: %.2f\n", imposto);

    }else if(salario >= 3000.01 && salario <= 4500){

        imposto = (salario - 3000) * 0.18 + (1000 * 0.08);
        printf("O imposto a ser pago eh: %.2f\n", imposto);

    }else if(salario > 4500){

        imposto = (salario - 4500) * 0.28 + (1000 * 0.08) + (1500 * 0.18);
        printf("O imposto a ser pago eh: %.2f\n", imposto);

    }

    return 0;
}
