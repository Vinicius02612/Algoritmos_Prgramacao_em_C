#include <stdio.h>
#include <stdlib.h>


void main(){
	int i, x, y, sumNum = 0,multNum = 1;
	
	scanf("%d %d", &x, &y);
	
	for(  i = x; i < y; i++){
		if( i % 2 == 0){
			sumNum = sumNum + i;	
		}else{
			multNum = multNum * i *(y - 2);
		}
	}
		printf(" Somando Pares  = %d \n", sumNum);
		printf(" Multiplicando Impares  = %d \n", multNum);
}
