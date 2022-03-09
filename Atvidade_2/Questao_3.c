#include <stdio.h>


void main(){
   char pl[20];
   int i,j,  pose;
   
   printf("Informe a palavra : ");
   gets(pl);
   
   
   for(i = 0; i < 20; i++){
   		if(pl[i] == 'r'){
   			pl[i] = 'l';
		}
   }
   printf(" Cebolinha falaria : %s \n", pl);
   
   
   printf("Houve troca nos caractere:");
   for(j = 0; j < 20; j++){
   		if(pl[j] == 'l'){
   			pose = j;
   		
   		printf("%d ",pose);
		}

   }

   
	
    
    
   
}
