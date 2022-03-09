#include <stdio.h>

#define X 2
#define Y 2

int main(){
	int i, j, a[X][Y], b[X][Y], c[X][Y] ;
	//preenchendo a matriz a
	printf("Informe os elementos da matriz A \n");
	for(i = 0; i < X; i++){
		for(j = 0; j < Y;j++){
			scanf("%d", &a[i][j]);
		}
	}
	//preenchendo a matriz a
	printf("Informe os elementos da matriz B \n");
	for(i = 0; i < X; i++){
		for(j = 0; j < Y;j++){
			scanf("%d", &b[i][j]);
		}
	}
	//obtendo a terceira matriz
	for(i = 0; i < X; i++){
		for(j = 0; j < Y; j++){
				c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Soma das Matrizes A +  B \n");
	for(i = 0; i < X; i++){
		for(j = 0; j < Y; j++){
				printf("%2d ", c[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
