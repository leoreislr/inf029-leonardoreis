#include <stdio.h>
#include <stdlib.h>
#define TAMMAX 20
#define ANOAT 2019

//QUESTAO 9

typedef struct dados_clientes{

char nome[50];
char sexo;
int data_dia;
int data_mes;
int data_ano;
char cpf[11];
}Dados;


int validarnome(char nome[20]){

int tam;

tam = strlen(nome);

   if(tam>TAMMAX)
    tam = 1;
   else
    tam = 0;

  return tam;

}

int validarsexo(char sexo){

int val;

    if((sexo == 'f') || (sexo == 'F') || (sexo == 'm') || (sexo == 'M'))
        val = 0;
    else
        val = 1;

return val;

}

int validarData(int data_dia,int data_mes,int data_ano){

    int val = 1;

    if((data_dia >= 1 && data_dia <= 31) && (data_mes >= 1 && data_mes <=12) && (data_ano >= 1800 && data_ano <= ANOAT)){

        if((data_dia <=31) && (data_mes == 1 || data_mes == 3 || data_mes == 5 || data_mes == 7 || data_mes ==8 || data_mes == 10 || data_mes == 12))
            val = 0;
        if((data_dia <= 30) && (data_mes == 4 || data_mes == 6 || data_mes == 9 || data_mes == 11))
            val = 0;
        if(data_dia <= 28 && data_mes == 2)
            val = 0;
        if((data_dia == 29 && data_mes == 2) && ((data_ano % 4) == 0))
            val = 0;
    }

    return val;


}

int validarCPF(char cpf[11]){

  char validcpf[]= "999999999999";
    int nval, val;

    nval = strlen(cpf);
    if(nval == 11){

        val = strcmp(validarCPF, cpf);
        if(val >= 0)
            nval = 0;
        else
            nval = 1;
    }
    else
        nval = 1;

    return nval;

}
Dados cadastrasCliente(){

Dados cliente;

int tam,val = 0;
 // CLIENTE - NOME
  do{
        printf("****CADASTRO DO CLIENTE****\n");
        printf("insira o nome do cliente:");
        scanf("%s", &cliente.nome);
        fflush(stdin);
        tam = validarnome(cliente.nome);

        if(tam == 0)
            printf("Nome cadastrado com sucesso\n\n [ENTER] para prosseguir\n ");

        else{
            printf("Nome com mais de 20 caracteres, por favor inserir um nome de ate 20 caracteres \n");
            val = 1;
            }

        system("PAUSE");
        system("cls");
    }while(val == 1);

// CLIENTE - DATA
    do{
        printf("****CADASTRO DO CLIENTE****\n");
        printf("insira a data de nascimento\n");
        printf("dia: ");
        scanf("%d", &cliente.data_dia);
        printf("mes: ");
        scanf("%d", &cliente.data_mes);
        printf("ano: ");
        scanf("%d", &cliente.data_ano);

        val = validarData(cliente.data_dia, cliente.data_mes, cliente.data_ano);

        if(val == 0)
            printf("Data cadastrada com sucesso\n\n [ENTER] para prosseguir\n ");

        else{
            printf("Data invalida, por favor inserir uma data valida \n");
            val = 1;
            }

        system("PAUSE");
        system("cls");
        fflush(stdin);
    }while(val == 1);

//CLIENTE - CPF
   do{
        printf("****CADASTRO DO CLIENTE****\n");
        printf("insira o cpf no esquema xxx.xxx.xxx-xx\n");
        scanf("%s", &cliente.cpf);
        val = validarCPF(cliente.cpf);

        if(val == 0)
            printf("CPF cadastrado com sucesso\n\n [ENTER] para prosseguir\n ");

        else{
            printf("CPF invalido, por favor inserir um CPf valido \n");
            val = 1;}


        fflush(stdin);
        system("PAUSE");
        system("cls");

    }while(val ==1 );
//CLIENTE - SEXO

    do{
        printf("****CADASTRO DO CLIENTE****\n");
        printf("insira o sexo no esquema\n 'F' ou 'f' para: [feminino]\n 'M' ou 'm' para [masculino]\n");
        scanf("%s", &cliente.sexo);

        val = validarsexo(cliente.sexo);

        if(val == 0)
            printf("Sexo cadastrado com sucesso\n\n [ENTER] para prosseguir\n ");

        else{
            printf("sexo invalido, por favor inserir um sexo valido \n");
            val = 1;}

        system("cls");
    }while(val ==1);
        return cliente;


}

int main()
{

   Dados cliente;

   cliente = cadastrasCliente();

   printf("DADOS CLIENTE\n");
   printf("Nome: %s\n", cliente.nome);
   printf("CPF: %s\n", cliente.cpf);
   printf("Sexo: %c\n", cliente.sexo);
   printf("Data de nascimento: %d/%d/%d",cliente.data_dia,cliente.data_mes,cliente.data_ano);

        return 0;
}
