#include <stdio.h>
#include <stdlib.h>

//QUESTAO 06

typedef struct ler3letras{

char l1, l2, l3;

}Ler;

Ler lerLetras(){

 Ler letras;

 printf("Digite a 1 letra:\n");
 scanf("%s",&letras.l1);
 printf("Digite a 2 letra:\n");
 scanf("%s",&letras.l2);
 printf("Digite a 3 letra:\n");
 scanf("%s",&letras.l3);

 return letras;

}

int main()
{
    Ler imprimir;

    imprimir =  lerLetras();


    printf("As letras sao %c/%c/%c",imprimir.l1,imprimir.l2,imprimir.l3);


    return 0;
}
