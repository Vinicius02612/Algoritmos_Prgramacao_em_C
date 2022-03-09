#include <stdio.h>
#include <stdlib.h>



void main() {	
	float valueProduct, ProductSale, profitA = 0.45, profitB = 0.3, result;	
	printf("Entre com o valor de compra \n");
	scanf("%f", &valueProduct);
	if(valueProduct < 20.00){
		result = valueProduct * profitA;
		ProductSale = result + valueProduct;
	}else{
		result = valueProduct * profitB;
		ProductSale = result + valueProduct;
	}
	printf("Valor de Venda  : %.2f", ProductSale);
	
}
