#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float Distancia(float x1, float y1, float x2, float y2);
int main(){
	
	float a1, b2, a2, b1, r;
	
	printf("Informe os dados do PONTO 1: \n");
	scanf("%f %f", &a1, &b1);
	
	printf("Informe os dados do PONTO 2: \n");
	scanf("%f %f", &a2, &b2);
	

	r = Distancia(a1,b1,a2,b2);
	
	printf("O RESUTADO EH %.2f  ", r);

}



float Distancia(float x1, float y1, float x2, float y2){
	float Dxx_1, Dyy_2, res ;
	
	Dxx_1 = pow((x1 - x2),2);
	Dyy_2 = pow((y1 - y2),2);
	
	res = sqrt(Dxx_1 + Dyy_2);
	
	return res;
}
