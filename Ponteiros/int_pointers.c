#include <stdio.h>

int main(){
	
	//ponteiros � uma referencia a uma posi��o de memporia onde uma variavel � alocada.
	// -> podem ser contantes ou variaveis e atravez deles podemos acessar dados ou c�digos.
	
	int  v = 10;
	
	printf("valor : %d \n ", v); //mostra apenas o valor de uma variavel, no caso 10...
	
	printf("Referencia : %d \n", &v); //mostra a referencia(endere�o de mem�ria) de onde a variavel v esta alocada...
	
	//criando um ponteiro
	int *pointer;
	
	//apontando para um endere�o de memoria da variavel v ou seja 10;
	pointer = &v;
	printf("valor : %d \n ", v);
	printf("valor : %d \n ", *pointer); // imprime o valor 10...
	printf("referencia : %d \n ", pointer); // imprime o valor do endere�o da mem�ria...
	
	
	int x = 10;
	int *pointers;
	
	pointers = &x;
	
	int y = 40;
	*pointers = y;
	
	printf("%d %d",x,y); //imprime o valores 40 40 pois alterar o endere�� de mem�ria o valor passa a ser os mesmos   
	
	int *p,s = 5;
	*p = 2**p;
	printf("%d", *p);
	
	return 0;	
}
