#include <stdio.h>



void main(){
    int i, TamStr;
    char Str[30];
    
    printf("Entre com seu nome: \n");
    scanf("%s", Str);
    
    
    TamStr = strlen(Str);  //verificando a quantidade de caracrteres dentro da string
    
    for(i=0; i<TamStr; i++){   	// a funcao toupper converte um conjunto de caracteres minusculos em maiusculos
     Str[i] = toupper (Str[i]);  
    }
  
      printf("%s ",Str);
    
    
    
    
}
