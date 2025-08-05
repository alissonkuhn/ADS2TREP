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
//3.	Escreva um programa que leia o código de origem de um produto e imprima na tela a região de sua procedência conforme a tabela abaixo:
//-código 1 : Sul 			-código 5 ou 6 : Nordeste
//-código 2 : Norte 			-código 7, 8 ou 9 : Sudeste
//-código 3 : Leste 			-código 10 : Centro-Oeste
//-código 4 : Oeste 			-código 11 : Noroeste

