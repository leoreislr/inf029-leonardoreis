#include <stdio.h>
#include <stdlib.h>


// Questão 05
typedef struct ler4Numeros{
  int n1, n2, n3,n4;

}Ler;

Ler lernums(){
	Ler nums;
	printf("Informe o 1 numero:\n");
	scanf("%d", &nums.n1);
	printf("Informe o 2 numero:\n");
	scanf("%d", &nums.n2);
	printf("Informe o 3 numero:\n");
	scanf("%d", &nums.n3);
	printf("Informe o 4 numero:\n");
	scanf("%d", &nums.n4);

	return nums;
}







int main(){

  Ler imprimir;

  imprimir=lernums();

  printf("Os numeros sao %d/%d/%d/%d",imprimir.n1,imprimir.n2,imprimir.n3,imprimir.n4);


    return 0;
}
