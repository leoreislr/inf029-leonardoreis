#include <stdio.h>
#include <stdlib.h>

// Questão 1
float somar(float valor1, float valor2){
  float res;

  res = valor1 + valor2;
  return res;
}


int main()
{
    float valor1, valor2, result;

    printf("Informe o primeiro valor da soma:\n");
    scanf("%f", &valor1);
    printf("Informe o segundo valor da soma:\n");
    scanf("%f", &valor2);

    result = somar(valor1,valor2);
    printf("O valor da soma e : %.2f", result);


    return 0;
}
