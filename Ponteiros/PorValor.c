#include <stdio.h>
#include <stdlib.h>


int inc1( int x){
	x += 1;
	
	return x;
}
void inc2(int *x){
	(*x)++;
}


void main(){
	int n;
	n = 1;
	printf("%i", n);
	printf("%i", inc1(n));
	inc2(&n);
	printf("%i",n );
	inc2(&n);
	printf("%i",n );
}
