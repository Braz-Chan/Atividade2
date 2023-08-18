#include <stdio.h>

int main() {
    float custo_fabrica, custo_consumidor;
    float percentual_distribuidor = 0.28;
    float percentual_impostos = 0.45;
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custo_fabrica);
    custo_consumidor = custo_fabrica + (custo_fabrica * percentual_distribuidor) + (custo_fabrica * percentual_impostos);
    printf("O custo final ao consumidor é: R$%.2f\n", custo_consumidor);
}