#include <stdio.h>
#include <stdlib.h>

/*4. As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e
R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o 
número de maçãs compradas, calcule e escreva o custo total da compra.
*/

void main(){
	int amount;
	float price, result;
	
	printf("Informe a quantidade: \n");
	scanf("%d", &amount);
	
//	As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia
	if(amount < 12){
		price =  1.30;
		result = amount * price;
		printf("%.2f ", result); 
	}else{
//		R$ 1,00 se forem compradas pelo menos 12
		price = 1.00;
		result = amount * price;
		printf("%.2f ", result);
	}		
}
