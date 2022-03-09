#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int  YoungerMan,OlderMan,YoungerWoman,OlderWoman;
	int AgeWoman_1,AgeWoman_2, AgeMan_1;
	int AgeMan_2, SumAges, ProductAge;
	
	printf("Informe a idade do homen 1: \n");
	scanf("%d", &AgeMan_1);
	printf("Informe a idade do homen 2: \n");
	scanf("%d", &AgeMan_2);
	
	printf("Informe a idade da Mulher 1: \n");
	scanf("%d", &AgeWoman_1);
	printf("Informe a idade do Mulher 2: \n");
	scanf("%d", &AgeWoman_2);
	
	// pagando idade do homem mais velho
	if(AgeMan_1 > AgeMan_2){
		OlderMan = AgeMan_1;
	}else{
		OlderMan = AgeMan_2;
	}
	//pegando a idade do homem mais novo...
	if(AgeMan_1< AgeMan_2){
		YoungerMan = AgeMan_1;
	}else{
		YoungerMan = AgeMan_2;
	}
	// pegando a idade da mulher mais nova
	if(AgeWoman_1 < AgeWoman_2){
		YoungerWoman = AgeWoman_1;
	}else{
		YoungerWoman = AgeWoman_2;
	}
	//pegando idade da mulher mais velha
	if(AgeWoman_1 > AgeWoman_2){
		OlderWoman = AgeWoman_1;
	}else{
		OlderWoman = AgeWoman_2;
	}
	
	//somando a idade do homem mais velho com a mulher mais nova
	SumAges = OlderMan + YoungerWoman;	
	// produto da idade do homem mais jovem com a mulher mais velha
	ProductAge = YoungerMan * OlderWoman;
	 
	 printf("%d %d \n",SumAges,ProductAge);
	 
}
