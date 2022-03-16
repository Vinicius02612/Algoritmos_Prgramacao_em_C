#include <stdio.h>

void perm(int *p, int *q);
void main(){
	int a  =3, b = 7;
	
	perm(&a, &b);
	
	printf("%d %d", a, b);
}


void perm(int *p, int *q){
	int x;
	
	x = *p;
	*p = *q;
	*q = x;
}
