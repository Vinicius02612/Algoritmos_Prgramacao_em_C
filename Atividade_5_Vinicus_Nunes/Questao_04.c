#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void somaComplexo(float rz1, float iz1, float rz2, float iz2, float *rz3,  float *iz3);
int main(){
	float rz1, iz1, rz2, iz2,rz3,iz3;
	int opc;
	do{
		scanf("%f %f %f %f", &rz1, &iz1, &rz2, &iz2);
		somaComplexo(rz1, iz1, rz2, iz2, &rz3, &iz3);
		
		printf("Sair = 0 || Continuar = 1 \n");
		scanf("%d", &opc);
	}while(opc != 0);
	
	return 0;
}

void somaComplexo(float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3){
		// rz1 = 6
		//iz1 = 5
		//rz2 =  2
		//iz2 = -1
		//*rz3 = rz1 + iz2
		*rz3 = (rz1 + rz2);
		//*iz3 = iz1 - iz2 
		*iz3 = (iz1 + iz2);
		
		printf("%.1f + %.1fi \n",*rz3, *iz3);
		
}
