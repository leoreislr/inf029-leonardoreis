#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_ALUNOS 5

int    a = 0;  // Contador de alunos

typedef struct dados_aluno
{

    char nome[8];
	int matricula;
	char sexo;
	int nasci_dia;
	int nasci_mes;
	int nasci_ano;
    char cpf[11];
} Aluno;

Aluno lista_alunos[TAM_ALUNOS];

void cadastrar_aluno();

int main()
{

    int opcao = 1;

	while(opcao)
    {

        printf("\n------------- CADASTRO ESCOLAR -------------\n\n");
        printf("------- MENU -------");
        printf("\n0 - Sair");
        printf("\n1 - Cadastrar professor");
        printf("\n2 - Cadastrar aluno");
        printf("\n3 - Cadastrar disciplina");
        printf("\n4 - Inserir aluno em disciplina");
        printf("\n5 - Excluir aluno de disciplina");
        printf("\n6 - Relatorios");
        printf("\n\nDigite sua opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            cadastrar_professor();
            break;
        case 2:
            cadastrar_aluno();
            break;
        case 3:
            cadastrar_disciplina();
            break;
        case 4:
            inserir_aluno_disciplina();
            break;
        case 5:
            excluir_aluno_disciplina();
            break;
        case 6:
            menu_relatorios();
            break;
        }//END switch
	}//END while

void cadastrar_aluno()
{

    printf("\nCADASTRO DE ALUNOS");

    printf("\n\nInsira o nome: ");
    getchar();
    gets(lista_alunos[a].nome);

    printf("Insira a matricula: ");
    scanf("%d", &lista_alunos[a].matricula);

    printf("Insira o sexo (F ou M): ");
    getchar();
    scanf("%c", &lista_alunos[a].sexo);
    while(lista_alunos[a].sexo != 'F' && lista_alunos[a].sexo != 'f' &&
          lista_alunos[a].sexo != 'M' && lista_alunos[a].sexo != 'm')
    {
        printf("Sexo invalido. Digite novamente: ");
        getchar();
        scanf("%c", &lista_alunos[a].sexo);
    }

    printf("Insira a data de nascimento (dd mm aaaa): ");
    getchar();
    scanf("%d %d %d", &lista_alunos[a].nasci_dia, &lista_alunos[a].nasci_mes, &lista_alunos[a].nasci_ano);

    printf("Insira o CPF (XXX.XXX.XXX-XX): ");
    getchar();
    gets(lista_alunos[a].cpf);

    a++;
}