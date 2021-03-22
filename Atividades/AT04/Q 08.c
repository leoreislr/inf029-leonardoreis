#include <stdio.h>
#include <stdlib.h>


//Questão 8

typedef struct dados_clientes{

char nome[8];
char sexo;
int data_dia;
int data_mes;
int data_ano;
char cpf[11];
}Dados;

Dados cadastrasCliente(){

 Dados cliente;

 printf("Informe o nome do cliente\n");
  gets(cliente.nome);

 printf("Infome o sexo do cliente\n");
 scanf("%c",&cliente.sexo);

 printf("Informe a data de nascimento ex(dd mm aaaa)\n");
 scanf("%d %d %d",&cliente.data_dia,&cliente.data_mes,&cliente.data_ano);

 printf("Informe o cpf do cliente\n");
 getchar();
 gets(cliente.cpf);

 return cliente;

}


int main()
{
    Dados imprimir;

    imprimir = cadastrasCliente();

    printf("O nome do cliente e: %s\no sexo do cliente e: %c\nA data de nascimento do cliente e: %d/%d/%d\nO CPF do cliente e:  %s\n",
           imprimir.nome,imprimir.sexo,imprimir.data_dia,imprimir.data_mes,imprimir.data_ano,imprimir.cpf);

    return 0;
}
