#include<stdio.h>

#define D 10

int main(){
    int vet[D], i, j, k ;
    
    for(i = 0; i < 5;i++){
    	scanf("%d ", &vet[i]);
    		if(vet[i] < 1 || vet[i] > 20){
				return 0;
			}
	}
	
	printf("%s%13s    %s%13\n","Elemento", "Valor", "Histograma");
	for(j  = 0; j < 5; j++){
		
		printf("%7d%13d  ", j, vet[j]);
		for(k  = 0; k < vet[j]; k++){
				printf("  ");
					printf("*");
					
		}		
		printf("\n");
	}
    
   
    return 0;
}
