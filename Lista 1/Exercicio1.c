#include <stdio.h>
#include <conio.h>

void main(){
	int cod;
	printf("<<Procedencia do Produto>>\n");
	printf("Informe o codigo do produto: ");
	scanf("%d", &cod);
	if (cod == 1){
		printf("Regiao Sul");
	}
	else
		if (cod ==2){
			printf("Regiao Norte");
		}
		else
			if (cod ==5 || cod == 6){
				printf("Regiao Nordeste");
			}
			else
				if (cod >=7 && cod <= 9){
					printf("Regiao Sudeste");
				}
}
//3.	Escreva um programa que leia o c�digo de origem de um produto e imprima na tela a regi�o de sua proced�ncia conforme a tabela abaixo:
//-c�digo 1 : Sul 			-c�digo 5 ou 6 : Nordeste
//-c�digo 2 : Norte 			-c�digo 7, 8 ou 9 : Sudeste
//-c�digo 3 : Leste 			-c�digo 10 : Centro-Oeste
//-c�digo 4 : Oeste 			-c�digo 11 : Noroeste

