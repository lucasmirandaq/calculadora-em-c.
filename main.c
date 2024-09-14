#include <stdio.h>

int main(void) {
  int valor;
  float a, b, resultado;
  
  
  printf ("CALCULADORA\n");
  printf ("Digite 1 para Adição \n");
  printf ("Digite 2 para Subtração \n");
  printf ("Digite 3 para Multiplicação \n");
  printf ("Digite 4 para Divisão \n");
  printf ("Digite: ");
  scanf("%d", &valor);

  switch ( valor )
  {
    case 1 :
    printf ("Calculadora de ADIÇÃO\n");
    printf ("Digite o valor de A:");
    scanf("%f", &a);
    printf ("Digite o valor de B:");
    scanf("%f", &b);
      
    printf ("\n");

    resultado = a + b;
    printf ("RESULTADO: %.2f\n", resultado);
    break;

    case 2 :
      printf ("Calculadora de SUBTRAÇÃO\n");
      printf ("Digite o valor de A:");
      scanf("%f", &a);
      printf ("Digite o valor de B:");
      scanf("%f", &b);

      printf ("\n");

      resultado = a - b;
      printf ("RESULTADO: %.2f\n", resultado);
    break;

    case 3 :
      printf ("Calculadora de MULTIPLICAÇÃO\n");
      printf ("Digite o valor de A:");
      scanf("%f", &a);
      printf ("Digite o valor de B:");
      scanf("%f", &b);

      printf ("\n");

      resultado = a * b;
      printf ("RESULTADO: %.2f\n", resultado);
    break;

    case 4 :
      printf ("Calculadora de DIVISÃO\n");
      printf ("Digite o valor de A:");
      scanf("%f", &a);
      printf ("Digite o valor de B:");
      scanf("%f", &b);

      printf ("\n");

      resultado = a / b;
      printf ("RESULTADO: %.2f\n", resultado);
    break;

    default :
    printf ("Valor invalido! Somente numeros de 1 a 4!\n");
  }
  return 0;
}