#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cubo( int *nPtr);
int main(){
	int n;
	
	do{
		scanf("%d", &n);
		cubo(&n);
	}while( n != 0);
	 return 0;
}
void cubo(int *nPtr){
	int c = (pow(*nPtr,3));
	if(c != 0){
		printf("%d\n", c);	
	}
}
