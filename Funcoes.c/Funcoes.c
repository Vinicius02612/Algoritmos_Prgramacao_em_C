#include <stdio.h>
#include <conio.h>

#define SENHA 1234

void alarme(void);
void main(void){
	int s;
	clrscr();
	
	printf("\n Senha:");
	scanf("%d", &s);
	
	if(s != SENHA){
		printf("\n Senha invalida!!");
		alarme();
	}else	printf("Senha correta!!!");
		
	getch();
}

void alarme(void){
	int f;
	for(f  = 100; f <= 5000; f+=20){
		sound(f);
		delay(100);
	}
	nosound();
}
