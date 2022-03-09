#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>

int RolarDados();

int main(){
	int resultado = RolarDados();
	return 0;
}
// implementei mais uma parte de contar os erros e acertos da pessoa conforme ela vai tentanto.
int  RolarDados(){
	srand(time(NULL));
	int i,dado_1, dado_2, lanca[6], res,soma[6], acertos = 0, erros = 0, pontos = 0;

	for(i = 0; i < 6; i++ ){
		dado_1 = rand() % 6 + 1;
		dado_2 = rand() % 6 + 1;
		res = dado_1 + dado_2;
		printf("Soma dos Dados  %d + %d =  %d \n", dado_1,dado_2, res);
		soma[1] = res;
		if((soma[1] == 7 )|| (soma[1] == 11) ){
				printf("Voce ganhou :) \n");
				acertos++;
				pontos += res;
				break;
		}
		if((soma[1] == 2 ) || (soma[1] == 3) || (soma[1] == 12) ){
			printf(" Voce perdeu :( \n");
			erros++;
			break;
		}
		if((soma[1] == 4)  ||
		 	(soma[1] == 5) ||
			(soma[1] == 6) || 
		  	(soma[1] == 8) || 
			(soma[1] == 9) ||
			(soma[1] == 10)){
			//soma pontos
			printf("O ponto eh %d \n", res);
			pontos += res;
		}
	}
		printf(" Erros: %d   Acertos: %d  Pontos acumulados: %d ", erros, acertos,pontos);
	
	return res;
}
