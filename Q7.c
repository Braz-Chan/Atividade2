#include <stdio.h>

int main() {
    float raio;
    
  
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
  
    float area = 3.14159265359 * raio * raio;
    

    printf("A área do círculo é: %.2f\n", area);
}