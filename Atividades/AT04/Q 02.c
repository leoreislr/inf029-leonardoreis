#include <stdio.h>
#include <stdlib.h>

//Questao 2
float subtrair(float x, float y, float z){

   float res;

   res = (x-y)-z;
   return res;

}

int main()
{

    float x,y,z, result;

    printf("Informe o primeiro valor da subtracao:\n");
    scanf("%f", &x);
    printf("Informe o segundo valor da subtracao:\n");
    scanf("%f", &y);
    printf("Informe o terceiro valor da subtracao:\n");
    scanf("%f", &z);

    result = subtrair(x,y,z);
    printf("O resultado da subtracao e : %.2f", result);

    return 0;
}
