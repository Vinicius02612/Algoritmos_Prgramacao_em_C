#include <stdio.h>
#include <stdlib.h>


void inverteNumeros( int x);

int main( void ){
	int i=0, num[4], x;
	
	printf("Digite um numero entre 1000 e 9999: \n");
	scanf("%d", &x);
	if(x < 1000 || x > 9999){
		printf("numero invalido!!!");
		exit;
	}
	return 0;
}


void inverteNumeros( int x){
	
	int num[4], i;
	for(i = 0; i < 4; i++){
		num[i] = x % 10;
		x /= 10;
	}
	for(i  = 0; i < 4; i++){
		printf("%d", num[i]);
	}

}

