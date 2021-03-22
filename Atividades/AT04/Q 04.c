#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 3

//Questao 4

float lerNumeros(int *k){

   float vnum[TAM_MAX];
   int i;

   if(*k==0)
   for(i=0; i<TAM_MAX;i++){
    printf("Digite o %d numero\n",i);
    scanf("%f",&vnum[i]);
   }
   for(i=*k; i<TAM_MAX; i++)
    return vnum[i];



   }
   int main(){

   float vnum[TAM_MAX];
   int i, k=0;

   for(i=0; i<TAM_MAX;i++){
    vnum[i]= lerNumeros(&k);
    k++;
   }
   for(i=0; i<TAM_MAX;i++)
    printf("os numeros sao %.0f\n", vnum[i]);
   return 0;
   }
