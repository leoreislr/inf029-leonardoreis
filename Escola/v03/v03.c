#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_PROFESSORES 5
#define TAM_DISCIPLINAS 5
#define TAM_ALUNOS 5

int p = 0,  // Contador de professores
    a = 0,  // Contador de alunos
    d = 0,  // Contador de disciplinas
    da = 0; // Contador da relação alunos_disciplina

typedef struct dados_professor
{

	char nome[8];
	int matricula;
	char sexo;
	int nasci_dia;
	int nasci_mes;
	int nasci_ano;
	char cpf[15];
} Professor;

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

typedef struct dados_disciplina
{

	char nome_disciplina[8];
	char codigo[7];
	int semestre;
	char nome_professor[8];
} Disciplina;

typedef struct alunos_disciplina
{
    int matricula;
    char codigo_disciplina[7];
} Alunos_disciplina;

Professor lista_professores[TAM_PROFESSORES];
Aluno lista_alunos[TAM_ALUNOS];
Disciplina lista_disciplinas[TAM_DISCIPLINAS];
Alunos_disciplina lista_alunos_disciplina[TAM_ALUNOS];

void cadastrar_professor();

void cadastrar_aluno();

void cadastrar_disciplina();

void inserir_aluno_disciplina();

void excluir_aluno_disciplina();

int main()
{

    int opcao = 1;

	while(opcao)
    {

        printf("\n------------- CADASTRO ECOLAR -------------\n\n");
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
        }
	}

    /*Teste aluno/professor
    printf("\n%s", lista_alunos[0].nome);
    printf("\n");
    printf("%d",lista_alunos[0].matricula);
    printf("\n%c", lista_alunos[0].sexo);
    printf("\n%d %d %d", lista_alunos[0].nasci_dia, lista_alunos[0].nasci_mes, lista_alunos[0].nasci_ano);
    printf("\n%s\n", lista_alunos[0].cpf);
    */

    /* Teste disciplina
    printf("\n%s", lista_disciplinas[0].nome_disciplina);
    printf("\n%s", lista_disciplinas[0].codigo);
    printf("\n%d", lista_disciplinas[0].semestre);
    printf("\n%s\n", lista_disciplinas[0].nome_professor);
    */

    /*Teste matricula aluno em disciplina
    printf("%s\n", lista_alunos_disciplina[0].codigo_disciplina);
    printf("%d\n", lista_alunos_disciplina[0].matricula);
    printf("%s\n", lista_alunos_disciplina[1].codigo_disciplina);
    printf("%d\n", lista_alunos_disciplina[1].matricula);
    */
    system("pause");
}

void cadastrar_professor()
{

    printf("\nCADASTRO DE PROFESSORES");

    printf("\n\nInsira o nome: ");
    getchar();
    gets(lista_professores[p].nome);

    printf("Insira a matricula: ");
    scanf("%d", &lista_professores[p].matricula);

    printf("Insira o sexo (F ou M): ");
    getchar();
    scanf("%c", &lista_professores[p].sexo);
    while(lista_professores[p].sexo != 'F' && lista_professores[p].sexo != 'f' &&
          lista_professores[p].sexo != 'M' && lista_professores[p].sexo != 'm')
    {
        printf("Sexo invalido. Digite novamente: ");
        getchar();
        scanf("%c", &lista_professores[p].sexo);
    }

    printf("Insira a data de nascimento (dd mm aaaa): ");
    getchar();
    scanf("%d %d %d", &lista_professores[p].nasci_dia, &lista_professores[p].nasci_mes, &lista_professores[p].nasci_ano);

    printf("Insira o CPF (XXX.XXX.XXX-XX): ");
    getchar();
    gets(lista_professores[p].cpf);

    p++;
}

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

void cadastrar_disciplina()
{

    printf("\nCADASTRO DE DISCIPLINAS");

    printf("\n\nInsira o nome da disciplina: ");
    getchar();
    gets(lista_disciplinas[d].nome_disciplina);

    printf("Insira o codigo: ");
    gets(lista_disciplinas[d].codigo);

    printf("Insira o semestre da disciplina: ");
    scanf("%d", &lista_disciplinas[d].semestre);

    printf("Insira o nome do professor: ");
    getchar();
    gets(lista_disciplinas[d].nome_professor);

    d++;
}

void inserir_aluno_disciplina()
{

    int i,j, temDisciplina = 0, temAluno = 0, duplicidade = 0;

    printf("\nMATRICULA DE ALUNO EM DISCIPLINA\n");
    printf("Digite o codigo da disciplina: ");
    getchar();
    gets(lista_alunos_disciplina[da].codigo_disciplina);

    // Testar se a disciplina existe
    for(i = 0; i < d; i++) // Varrer as disciplinas de uma a uma
    {
        // Se o código de disciplina digitado existir, seta-se a flag temDisciplina
        if(strcmp(lista_alunos_disciplina[da].codigo_disciplina, lista_disciplinas[i].codigo) == 0) temDisciplina = 1;
    }

    // O que fazer caso haja ou caso não haja a disciplina
    if(temDisciplina)
    {
        // Se a disciplina existe, agora pedimos a matrícula do aluno
        printf("Insira a matricula do aluno: ");
        scanf("%d", &lista_alunos_disciplina[da].matricula);

        // E agora a mesma comparação que foi feita para a disciplina
        for(i = 0; i < a; i++)
        {

            if(lista_alunos_disciplina[da].matricula == lista_alunos[i].matricula) temAluno = 1;
        }

        // Agora como proceder no caso de o aluno existir ou não
        if (temAluno)
        {
            // Existindo a disciplina e o aluno, sobra checar se o aluno não já é cadastrado
            // evitando duplicatas. Para isso, começa-se varrendo todas as disciplinas
            for(i = 0; i < da; i++)
            {
                // Se já houver cadastro para a mesma disciplina
                if(strcmp(lista_alunos_disciplina[da].codigo_disciplina, lista_alunos_disciplina[i].codigo_disciplina) == 0)
                {
                    // E o aluno for o mesmo
                    if(lista_alunos_disciplina[da].matricula == lista_alunos_disciplina[i].matricula)
                    {
                        printf("\nAluno ja cadastrado nessa disciplina!\n");
                        duplicidade = 1; // Seta a flag de cadastro duplo
                    }
                }
            }
            // Não havendo duplicidade, o cadastro é realizado simplesmente incrementando o contador
            if (!duplicidade)
            {
                printf("\nAluno cadastrado com sucesso!");
                da++;
            }

        }
        else
        {
            printf("\nAluno nao existe!");
            // Zerar os valores obtidos no gets e scanf
            strcpy(lista_alunos_disciplina[da].codigo_disciplina, "0000000");
            lista_alunos_disciplina[da].matricula = 0;
        }

    }
    else
    {
        // Se a disciplina não existe é só printar isso
        printf("\nDisciplina nao existe!");
        // E zerar o valor obtido no gets
        strcpy(lista_alunos_disciplina[da].codigo_disciplina, "0000000");
    }
}

void excluir_aluno_disciplina(){

	int i, temDisciplina = 0, temAluno = 0, excluirMatricula;
	char codigoDisciplina[7];

	printf("\nEXCLUSAO DE ALUNO EM DISCIPLINA\n");
    printf("Digite o codigo da disciplina: ");
    getchar();
    gets(codigoDisciplina);

    // Testar se a disciplina existe
    for(i = 0; i < d; i++) // Varrer as disciplinas de uma a uma
    {
        // Se o código de disciplina digitado existir, seta-se a flag temDisciplina
        if(strcmp(codigoDisciplina, lista_disciplinas[i].codigo) == 0) temDisciplina = 1;
    }

    // O que fazer caso haja ou caso não haja a disciplina
    if(temDisciplina)
    {
        // Se a disciplina existe, agora pedimos a matrícula do aluno
        printf("Insira a matricula do aluno: ");
        scanf("%d", &excluirMatricula);

        // E agora a mesma comparação que foi feita para a disciplina
        for(i = 0; i < a; i++)
        {

            if(excluirMatricula == lista_alunos[i].matricula) temAluno = 1;
        }

        // Agora como proceder no caso de o aluno existir ou não
        if (temAluno)
        {
        	//Procurar a matricula do aluno a ser excluido dentro da disciplina
            for(i = 0; i < da; i++)
            {
                    if(excluirMatricula == lista_alunos_disciplina[i].matricula)
                    {
                        lista_alunos_disciplina[i].matricula = -1;
                        strcpy(lista_alunos_disciplina[i].codigo_disciplina, "exclui");
						printf("\nAluno excluido de disciplina com sucesso!\n");
                    }
                    else{
                    	printf("\nAluno nao matriculado na disciplina ou ja foi excluido da mesma!");
					}
            }
        }
        else
        {
        	//Se o aluno n existe, printa isso
            printf("\nAluno nao existe!");
        }

    }
    else
    {
        // Se a disciplina não existe é só printar isso
        printf("\nDisciplina nao existe!");
    }
}

void menu_relatorios(){
    int escolha,
    flax = 0;

    printf("\n------------- ESCOLHA SUA OPCAO -------------\n\n");
    printf("------- OPCOES -------");
    printf("\n1 - Listar Alunos");
    printf("\n2 - Listar Professores");
    printf("\n3 - Listar Disciplinas");
    printf("\n4 - Listar Determinada disciplina");
    printf("\n5 - Listar Alunos por sexo");
    printf("\n6 - Listar Alunos ordenados por nome");
    printf("\n7 - Listar Alunos ordenados pela data de nascimento");
    printf("\n8 - Listar Professores por sexo");
    printf("\n9 - Listar Professores ordenados por nome");
    printf("\n10 - Listar Professores ordenados por data de nascimento");
    printf("\n11 - Listar Aniversariantes do mes");
    printf("\n12 - Listagem Especial");
    printf("\n \nDigite sua escolha: ");
    scanf("%d", &escolha);


switch(escolha)
{
   case 0:
       flax = 1;
    break;

   case 1:

    break;

   case 2 :

    break;

   case 3:

    break;

   case 4:

    break;

   case 5:

    break;

   case 6:

    break;

   case 7:

    break;

   case 8 :

    break;

   case 9:

    break;

   case 10:

    break;

   case 11:
    break;

   case 12:

    break;



}
    }


