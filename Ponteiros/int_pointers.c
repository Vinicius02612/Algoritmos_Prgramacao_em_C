#include <stdio.h>

int main(){
	
	//ponteiros é uma referencia a uma posição de memporia onde uma variavel é alocada.
	// -> podem ser contantes ou variaveis e atravez deles podemos acessar dados ou códigos.
	
	int  v = 10;
	
	printf("valor : %d \n ", v); //mostra apenas o valor de uma variavel, no caso 10...
	
	printf("Referencia : %d \n", &v); //mostra a referencia(endereço de memória) de onde a variavel v esta alocada...
	
	//criando um ponteiro
	int *pointer;
	
	//apontando para um endereço de memoria da variavel v ou seja 10;
	pointer = &v;
	printf("valor : %d \n ", v);
	printf("valor : %d \n ", *pointer); // imprime o valor 10...
	printf("referencia : %d \n ", pointer); // imprime o valor do endereço da memória...
	
	
	int x = 10;
	int *pointers;
	
	pointers = &x;
	
	int y = 40;
	*pointers = y;
	
	printf("%d %d",x,y); //imprime o valores 40 40 pois alterar o endereçõ de memória o valor passa a ser os mesmos   
	
	int *p,s = 5;
	*p = 2**p;
	printf("%d", *p);
	
	return 0;	
}
