#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int main(){

	int i, j, n[MAX], temp[MAX], quant = 0;
	
	for(i = 0; i < MAX; i++){
		n[i] =0;
		temp[i] =0;
	}
	for(i  = 0; i < MAX; i++){
		printf("Informe um numero ");
		scanf("%d", &n[i]);

		if(n[i] >= 10 && n[i] <= 100){
			
			for(j = 0; j < MAX; j++){
				if(n[i] == temp[j]){
					quant = 1;
				}
			}
			
			if(!quant){
				printf(" Numero ainda nao existe: %d \n",n[i]);
			}else{
				printf("Numero ja existe no vetor \n");
			}
			
			temp[i] = n[i];
			quant = 0;
		}else{
			printf("Numero invalido \n");
		}
	}
	
	
 	return 0;	
}
