#include <stdio.h>
#include <stdlib.h>

//Questao 3

int fator(){

 int res,fatorial,i;
 scanf("%d", &i);

 if( i >= 0){
    for(fatorial =1; i>1; i = i-1)

    fatorial = (fatorial*i);
    res = fatorial;
    }

 else{
    printf("ERRO - VALOR INVALIDO\n\n");
    return -1 ;// -1 = ERRO
 }
return res;

}

int main()
{

   int result,fatorial,i;

    printf("Insira o valor para encontrar o fatorial do mesmo: \n");


    result = fator(fatorial,i);
    printf("o fatorial do numero e : %d", result);

    return 0;
}
