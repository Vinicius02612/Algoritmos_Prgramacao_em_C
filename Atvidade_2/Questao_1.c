#include <stdio.h>

/*1. A UFPI campus Picos realizou uma pesquisa com uma amostra 40 alunos para analisar quantas
 vezes um aluno frequenta a biblioteca por m�s. Fa�a um algoritmo que calcula a frequ�ncia de respostas dos alunos.
  Esse programa deve ler uma sequ�ncia de n�meros inteiros com os valores entre 0 e 10 respondidos pelos alunos. 
  A sequ�ncia finaliza quando for digitado o valor -1.
 A seguir deve ser impresso a frequ�ncia de cada n�mero de acordo o exemplo a seguir.

*/

#define N 10
#define M 11

int  main(){
	int i,j,k, freq, votos[M], res = 0, quant;
	
	printf("Informe os votos \n");
	for(i = 0; i < M; i++){
		scanf("%d", &votos[i]);
	}
	
	
	
	quant = 1;
	for(i  = 0; i < M;i++){
		if(votos[i] == votos[i-1]){ //verificando se existem numeros iguas
			quant++;
		}else{
			quant = 1;
		}
	}
	
	for(i = 0; i < M; i++){
		printf(" %d %d \n", i,quant);
	}
	
	
	
	return 0;
}
