#include <stdio.h>

int main() {
    int anos, meses, dias, idade_em_dias;


    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

 
    idade_em_dias = (anos * 365) + (meses * 30) + dias;

  
    printf("A idade em dias é: %d\n", idade_em_dias);

}