#include <stdio.h>
#include <locale.h>
float imc(float, float);
int main()
{

	float peso, altura, r;
	printf("Digite o peso e a altura:\n");
	scanf("%f  %f",&peso,&altura);

	
	r = imc(peso,altura);
	
	printf("O seu imc eh: %2.f \n",r);
	if(r > 25){
		printf("Acima do peso\n");
	} 
	
	return 0;
}
float imc(float p,float a){
	float A = a;
	float P = p;
	float	imc = P/(A*A);
	
	return imc;	
}
