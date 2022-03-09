#include <stdio.h>
#include <stdlib.h>


void main(){
	
	float salary, ValueDiscount, result,ValueFinal;
	
	printf("Informe sue salario \n");
	scanf("%f", &salary);
	
	if(salary <= 600.00){
		ValueDiscount = 0.00;
		printf("%.2f \n", ValueDiscount);
		printf("%.2f \n", salary);
	}if(salary > 600 && salary <= 1200.00){
	//	ValueDiscount = 0.2;
		result = salary * 0.2;
			
		ValueFinal = salary - result;
		
		printf("%.2f \n", result);
		printf("%.2f \n", ValueFinal);
	}if(salary > 1200.00 && salary <= 2000.00){
	//	ValueFinal = 0.25;
	
		result = salary * 0.25;
		ValueFinal = salary - result;
		
		printf("%.2f \n", result);
		printf("%.2f \n", ValueFinal);
	}if(salary > 2000.00){
		
		result = salary * 0.3;
		ValueFinal = salary - result;
		
		printf("%.2f \n", result);
		printf("%.2f \n", ValueFinal);
	}
	
	
}
