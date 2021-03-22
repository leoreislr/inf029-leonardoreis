#include <stdio.h>
#include <stdlib.h>


//Questao 07
typedef struct ler_palavras{

char vp1[8], vp2[8], vp3[8];

}Ler;

Ler ler3palavras(){

  Ler palavras;

    printf("Informe a 1 palavra:\n");
    gets(palavras.vp1);


    printf("Informe a 2 palavra:\n");
    gets(palavras.vp2);

    printf("Informe a 3 palavra:\n");
    gets(palavras.vp3);


 return palavras;
}


int main()
{
    Ler imprimir;

    imprimir = ler3palavras();

    printf("As palavras sao \n%s\n%s\n%s\n",imprimir.vp1,imprimir.vp2,imprimir.vp3);

    return 0;
}
