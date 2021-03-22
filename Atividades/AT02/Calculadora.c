#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int somar(int valo1, int valo2, int res);
int subtrair(int valo1, int valo2, int res);
int multiplicar(int valo1, int valo2, int res);
int dividir(int valo1, int valo2, int res);

int main(){

		int valo1,valo2,op,res;
		op=1;

		while((op>0) && (op<=4)){		

		printf("\nDigite qual o operacao deseja realizar?\n");
		printf("\nDigite 0 caso deseje sair\n");
		printf("\nDigite 1 caso deseje somar\n");
		printf("\nDigite 2 caso deseje subtrair\n");
		printf("\nDigite 3 caso deseje multiplicar\n");
		printf("\nDigite 4 caso deseje dividir\n");

		scanf("%d", &op);	


			if(op == 0 ){
			printf("\nEncerrando o programa\n");
			}

			else if(op==1){
			printf("Digite o primeiro numero a ser somado:\n");scanf("%d", &valo1);
			printf("Digite o segundo numero a ser somado:\n"); scanf("%d", &valo2);	
			res = somar(valo1,valo2, res);
			printf("O resultado da soma eh: %d \n", res);
			}

			else if(op==2){
			printf("Digite o primeiro numero a ser subtraido:\n");scanf("%d", &valo1);
			printf("Digite o segundo numero a ser subtraido:\n"); scanf("%d", &valo2);	
			res = subtrair(valo1,valo2, res);
			printf("O resultado da subtracao eh: %d \n", res);
			}
	
			else if(op==3){
			printf("Digite o primeiro numero a ser multiplicado:\n");scanf("%d", &valo1);
			printf("Digite o segundo numero a ser multiplicado:\n"); scanf("%d", &valo2);	
			res = multiplicar(valo1,valo2, res);
			printf("O resultado da multiplicacao eh: %d \n", res);
			}

			else if(op==4){
			printf("Digite o primeiro numero a ser dividido:\n");scanf("%d", &valo1);
			printf("Digite o segundo numero a ser dividido:\n"); scanf("%d", &valo2);	
			res = dividir(valo1,valo2, res);
			printf("O resultado da divisao eh: %d \n", res);
			}		
			
	}
				
	
	return 0;
}

int somar(int valo1, int valo2, int res)
{
    res = valo1 + valo2 ;

    return res;
}

int subtrair(int valo1, int valo2, int res)
{	
	res = valo1 - valo2;

	return res;
}

int multiplicar(int valo1, int valo2, int res)
{
	res = valo1 * valo2;
	
	return res;
}

int dividir(int valo1, int valo2, int res)
{
	res = valo1/valo2; 

	return res;
}
 				

