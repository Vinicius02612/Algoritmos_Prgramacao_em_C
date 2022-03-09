#include <stdlib.h>
#include <stdio.h>

int main(){
	char vet1[10] = "VINICiUS_";
	char vet2[10] = "PROGRAMADOR";
	char vet3[10]  = "";
	int p, i;
	
	i = 0;
	p = 0;
	
	// pegando o primeiro vetor e jogando dentro do vet3
	while( vet1[i] != '\0'){
		vet3[p] = vet1[i]; 
		i++;
		p++;
	}
	// pegando o segundo vetor e jogando dentro do vet3
	i  = 0;
	while(vet2[i] != '\0'){
		vet3[p] = vet2[i];
		i++;
		p++;
	}
	
	vet3[p] = '\0';
	printf("%s \n", vet3);
	return 0;
}
