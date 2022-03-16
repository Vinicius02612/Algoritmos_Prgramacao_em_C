#include <stdio.h>


void minimax(int n );

void main(){
	
	int n = 5, y, l;
	minimax(&n);
	
	printf("Minino = %d | Maximo = %d", l, y);
	
}


void minimax(int n){
	int min = 0;
	int max = 0;
	int i, v[n];
	int *a, *b;
	for(i = 0; i < n; i++ ){
		if(v[i] < min){
			*a = v[i];
		}if(v[i] > max){
			*b = v[i];
		}
	}
}
