#include <stdio.h>
#include <stdlib.h>

void inc(int *x);
int main(){
	int n = 1;
	inc(&n);
	printf("%i\n",n);
	return 0;
}

void inc(int *x){
	*x +=1;
}
