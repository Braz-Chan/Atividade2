#include <stdio.h>

int main() {
    float valorEmReais;
    float cotacaoDolar;

 
    printf("Digite o valor em reais: ");
    scanf("%f", &valorEmReais);

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacaoDolar);

  
    float valorEmDolares = valorEmReais / cotacaoDolar;


    printf("O valor em dólares é: %.2f\n", valorEmDolares);

}