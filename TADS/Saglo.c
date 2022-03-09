#include <stdlib.h>
#include <stdio.h>

typedef struct data {
	int dia;
	int mes;
	int ano;
} DATA;


typedef struct {
	char nome[31];
	char fone[21];
	DATA nasc;
} PESSOA;


int main(){
	
	PESSOA amigo;
	amigo.nome, "Itivaldo Buzo";
	amigo.fone, "850-9973";
	amigo.nasc.dia = 27;
	amigo.nasc.mes = 7;
	amigo.nasc.ano = 1970;
	
	printf("Amigo %s", PESSOA.amigo.nome);
	printf("Amigo %s", PESSOA.amigo.fone);
	printf("Amigo %s", PESSOA.amigo.nasc);
	
	
	return 0;
}
