#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 2
#define P 2
int main(){
	
	int i,j,k, a[M][N], b[N][P], c[M][P], temp;
	
	printf("Preecha a matriz A: \n");
	for(i = 0; i < M; i++){
		for(j = 0; j < N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Preecha a matriz B: \n");
	for(i = 0; i < N; i++){
		for(j = 0; j < P;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Matriz A \n");
	for(i = 0; i < M; i++){
		for(j = 0; j < N;j++){
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz B \n");
	for(i = 0; i < N; i++){
		for(j = 0; j < P;j++){
			printf(" \t %d  ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("Produto da Matriz A X B \n");
	for(i = 0; i < M; i++){
		for(j = 0; j < N; j++){
			temp = 0;
				for( k = 0; k < P; k++){
						temp +=  a[i][k]*b[k][j];
				}	
			c[i][j] = temp;
		}
	}
	for(i =0; i < M; i++){
		for(j = 0; j < P;j++){
				printf(" \t %d", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
