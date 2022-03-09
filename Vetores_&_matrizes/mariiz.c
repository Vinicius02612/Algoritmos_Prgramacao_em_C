#include <stdlib.h>
#include <stdio.h>

#define M 4
#define N 3
int main(){
	int i ,j;
	char n[M][N];
	
	for(i = 0; i < N; i++){
		for(j = 0; j < M; j++){
			n[i][j] =  "*";
		}
	}
	
	printf("Elementos do vetor \n");
	
	for(i = 0; i < N; i++){
		for(j = 0; j < M; j++){
			printf("%i  ",n[i][j]);
				
		}
	printf("\n");
	}

	return 0;
}
