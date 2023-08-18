#include <stdio.h>

int main() {
   
    float custo_mercadoria, valor_frete, despesas_eventuais, valor_venda;
    float custo_total, lucro, percentagem_lucro;

    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo_mercadoria);

    printf("Digite o valor do frete: ");
    scanf("%f", &valor_frete);

    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesas_eventuais);

    custo_total = custo_mercadoria + valor_frete + despesas_eventuais;

     printf("Digite o valor de venda: ");
    scanf("%f", &valor_venda);

  lucro = valor_venda - custo_total;

    percentagem_lucro = (lucro / custo_total) * 100;

    printf("\nCusto Total: R$%.2f\n", custo_total);
    printf("Lucro: R$%.2f\n", lucro);
    printf("Percentagem de Lucro: %.2f%%\n", percentagem_lucro);

}