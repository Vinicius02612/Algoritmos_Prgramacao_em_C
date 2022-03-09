#include <stdio.h>
#include <stdlib.h>

void main(){
	char destiny;
	int going ;
	float passage;
	
	printf("Informe o destino que voce deseja ir:\n");
	printf("DESTINO \n Regiao Norte ---- a,"
	" \n Regiao Nordeste ---- b,"
	" \n Regiao Centro-Oeste ---- c,"
	" \n Regiao Sul ---- d \n");
	scanf("%s", &destiny);

	
	printf("Que tipo de passagem voce deseja?\n"
	"Selecione 0 para IDA e 1 para IDA E VOLTA \n");
	scanf("%d", &going);
	

	if((destiny == 'a') && (going == 0)){
		passage = 500.00;
		printf("R$ %.2f",passage);
	}if((destiny == 'b') && (going == 0)){
		passage = 350.00;
		printf("R$ %.2f",passage);
	}if((destiny == 'c') && (going == 0)){
		passage = 350.00;
		printf("R$ %.2f",passage);
	}if((destiny == 'd') && (going == 0)){
		passage = 300.00;
		printf("R$ %.2f",passage);
	}
	
	if((destiny == 'a') && (going == 1)){
		passage = 900.00;
		printf("R$ %.2f",passage);
	}if((destiny == 'b') && (going == 1)){
		passage = 650.00;
		printf("R$ %.2f",passage);
	}if((destiny == 'c' ) && (going == 1)){
		passage = 600.00;
		printf("R$ %.2f",passage);
	}if((destiny == 'd' ) && (going == 1)){
		passage = 550.00;
		printf("R$ %.2f",passage);
	}
	
	
	
	
	
}
