
#include <stdio.h>

main() {

  int numero1, numero2, resultadoSoma, resultadoSub, resultadoDiv, resultadoMult;

  printf("Digite o primeiro numero \n");
  scanf("%d", &numero1);
  printf("\nDigite o segundo numero\n");
  scanf("%d", &numero2);

  
  resultadoSoma = numero1 + numero2;
  resultadoSub = numero1 - numero2;
  resultadoMult = numero1 * numero2;
  resultadoDiv = (float)numero1 / numero2;

  printf("\nresultado soma: %d", resultadoSoma );
  printf("\nresultado subtracao: %d", resultadoSub);
  printf("\nresultado divisao: %2f", resultadoDiv);
  printf("\nresultado multiplicacao: %d", resultadoMult);
}