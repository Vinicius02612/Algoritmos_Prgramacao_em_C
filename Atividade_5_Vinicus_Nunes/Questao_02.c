#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void raizes(float a, float b, float c, float *x1,float *x2);


int main(){
	float a,b,c,x1,x2 ,delt, pont, resMult , resMultA;
	int opc ;
	do{
		scanf("%f %f %f", &a, &b, &c);
		raizes(a,b,c,&x1,&x2);
		if(a == 0){
			printf("");
			break;
		}
		printf("Sair == 0 || Continuar ==  1 \n");
		scanf("%d", &opc);
	}while( opc != 0 );
	
	return 0;
}

void raizes(float a, float b, float c, float *x1,float *x2){
	float   delt, pont, resMult , resMultA;

		pont = pow(b,2);
		resMult =  (4*a*c);	
			
		delt = pont - resMult;
		if(delt < 0){
			printf("Complexo...");
		}else{
			resMultA = (2*a);
			*x1 = (-b + sqrt(delt))/resMultA;	
			*x2 = (-b - sqrt(delt))/resMultA;
		}
		printf("X1 = %.1f \n",*x1);
		printf("X2 = %.1f \n",*x2);
		
}
