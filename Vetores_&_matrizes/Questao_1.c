#include <stdio.h>

/*1. A UFPI campus Picos realizou uma pesquisa com uma amostra 40 alunos para analisar quantas
 vezes um aluno frequenta a biblioteca por mês. Faça um algoritmo que calcula a frequência de respostas dos alunos.
  Esse programa deve ler uma sequência de números inteiros com os valores entre 0 e 10 respondidos pelos alunos. 
  A sequência finaliza quando for digitado o valor -1.
 A seguir deve ser impresso a frequência de cada número de acordo o exemplo a seguir.

*/

#define N 10
#define M 10

int  main(){
	int i,j,k, freq[N], votos[M], fake[M], res = 0, quant;
	
	printf("Informe os votos \n");
	for(i = 0; i < M; i++){
		printf("voto :",quant++);
		scanf("%d", &votos[i]);
	}
	
	for(i = 0; i < M; i++){
		fake[i] = votos[i];
	}
	
	for(i = 0; i < M; i++){
		quant = 0;
		for(j = k++; j < M; j++ ){
			if(fake[i] == votos[j]){
				quant++;
			}
		}
		freq[i] *= quant;
	}
	
	for(i = 0; i < N;i++){
		if(fake[i] > 0){
			printf("indeice %d : Votos %d \n", freq[i], votos[i]);
		}
		
	}

	
	
	
	
	
	

	
	
	
	
	return 0;
}
