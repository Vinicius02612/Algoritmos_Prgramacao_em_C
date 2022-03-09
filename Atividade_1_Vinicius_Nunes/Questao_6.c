#include <stdio.h>
#include <stdlib.h>


void main(){
	int n, soma= 0, i = 0;
	
	
	while(n > 0){
		scanf("%d", &n);
		i++;
		soma = soma + n;
		
	}
	printf("%d", soma);
}
