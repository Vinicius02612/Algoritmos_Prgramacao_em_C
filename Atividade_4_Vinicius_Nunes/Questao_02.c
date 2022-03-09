#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	float x1;
	float x2;
	float y1;
	float y2;
}DistanceBetWeenPoint;

float CalculateDistance(float x1, float y1, float x2, float y2);

int main(){
	DistanceBetWeenPoint DistancePoints;
	float  r;
	
	scanf("%f %f %f %f",&DistancePoints.x1, &DistancePoints.x2, &DistancePoints.y1, &DistancePoints.y2);

	r = CalculateDistance(DistancePoints.x1,DistancePoints.x2,DistancePoints.y1,DistancePoints.y2 );
	
	printf("O Distancia: %.4f  ", r);
}

float CalculateDistance(float x1, float y1, float x2, float y2){
	float Dxx_1, Dyy_2, res ;
	
	Dxx_1 = pow((x1 - x2),2);
	Dyy_2 = pow((y1 - y2),2);
	
	res = sqrt(Dxx_1 + Dyy_2);
	
	return res;
}
