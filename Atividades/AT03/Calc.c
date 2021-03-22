#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "Multiplicar.h"

int main(){

int num1,num2,res;

printf("\nDigite o 1 valor a ser multiplicado\n");
scanf("%d", &num1);

printf("\nDigite o 2 valor a ser multiplicado\n");
scanf("%d", &num2);

res=multiplicar(num1,num2);

printf("O valor da multiplicacao e : %d\n", res);
return 0;


}