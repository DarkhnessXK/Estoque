#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int i = 0;

struct produto{
	char nome[15];
	char setor;
	int quantidade;
	float preco = 0;
	
};
typedef struct produto estoque;
estoque vetestoque[100];

void cadastrar() {
printf("\ndigite os dados do produto: \n");
printf("\ndigite o nome: \n");
scanf("%s",&vetestoque[i].nome);
printf("\ndigite o setor: \n");
fflush(stdin);
scanf("%c",&vetestoque[i].setor);
printf("\ndigite a quantidade: \n");
scanf("%i",&vetestoque[i].quantidade);
printf("\ndigite o preco: \n");
scanf("%f",&vetestoque[i].preco);

}
void pesquisa_setor(){
	char setor;
	printf("\ndigite o setor para pesquisar os produtos: \n");
	fflush(stdin);
	scanf("%c",&setor);
	//setor = getch();
	for(i=0;i<100;i++){
		if (setor == vetestoque[i].setor){
		
		printf("\nproduto: %s\n",vetestoque[i].nome);
		printf("\nquantidade: %i\n",vetestoque[i].quantidade);
		printf("\npreco: %f\n",vetestoque[i].preco);
		printf("\n-------------------------------------------------------\n");
		
	}
	}
	if(setor != vetestoque[i].setor){
		printf("\nSetor Vazio\n");
	}
		
}	

void capital(){
	float soma;
	for(i=0;i<100;i++){
		
		if(vetestoque[i].preco != 0){
		
		soma = soma + (vetestoque[i].preco * vetestoque[i].quantidade);
		
		}
	}
	printf("\nO capital total investido em produtos e: \n");
	printf("\n%f\n",soma);
}

int main(){
	int op;
printf("\nDigite a opcao desejada: \n");
printf("\n1 - cadastrar produto\n");
printf("\n2 - pesquisar por setor\n");
printf("\n3 - total de capital investido\n");
printf("\n4 - sair do programa\n");
scanf("%i",&op);

	switch(op){
		
		
		case 1:
			cadastrar();
			break;
			
		case 2:
			pesquisa_setor();
			break;
			
		case 3:
			capital();
			break;
			
		case 4:
			return 0;
			break;
			
			default:
				printf("opcao incorreta");
				
				break;
	}
	
	
	getch();
	system("cls");
	main();
	return 0;
}
