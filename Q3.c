#include <stdio.h>

int main() {

    double comprimento, largura;
    

    printf("Digite o comprimento da sala: ");
    scanf("%lf", &comprimento);
    
    printf("Digite a largura da sala: ");
    scanf("%lf", &largura);
    
 
    double area = comprimento * largura;
    
    
    printf("A área da sala é %.2lf metros quadrados.\n", area);
    
  
}