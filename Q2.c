#include <stdio.h>

int main() {
  
    double numero;
    printf("Digite um número: ");
    scanf("%lf", &numero);
    double dobro = numero * 2;
    printf("O dobro de %.2lf é %.2lf\n", numero, dobro);
    
}