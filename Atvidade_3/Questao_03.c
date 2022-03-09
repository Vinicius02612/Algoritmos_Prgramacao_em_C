#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>

#define VEZES 100

int jogar( int i);

int main(){
	int i,lado,cara=0, coroa =0;
	srand(time(NULL)); //altea os valores aletarios durante a execução
	
	for( i = 1 ; i <= VEZES ; i++ ){
		
			lado  = jogar(i);		
			if(lado == 1){
				   cara++;
				   printf("Lado da moeda Cara  %d \n", lado);	
			}else{
				   coroa++;
				   printf("Lado da moeda Cora %d \n", lado);
			}
	}
	printf("O numero de caras foi: %d",cara);
		  		
}
int  jogar(i){	
	return rand()%2;
}
