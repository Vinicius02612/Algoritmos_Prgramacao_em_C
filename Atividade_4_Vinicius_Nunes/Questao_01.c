#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[20];
	float height;
	float weight;
	float ira;
}DataStudent;

int main(){
	DataStudent studentData[5];
	float mediaHeight, mediaWeight, mediaIra, largerHeight = 0, largerWeight =0, largerIra =0;
	float countWeight = 0.0, countHeight = 0.0, countIra = 0.0;
	char DataName[20];
	int i, numStudent = 5 ;

	for(i=0; i < numStudent; i++){
		setbuf(stdin, NULL);
		scanf("%s %f %f %f", &studentData[i].name,&studentData[i].height, &studentData[i].weight,&studentData[i].ira);
	}
	
	for(i = 0; i < numStudent; i++){
		if(studentData[i].weight > 0){ //calculando media dos pesos
			countWeight = countWeight + studentData[i].weight;
		}
		if(studentData[i].height > 0){ //calculando meida das alturas
			countHeight = countHeight + studentData[i].height;
		}
		if(studentData[i].ira > 0){ //calculando media dos iras...
			countIra = countIra + studentData[i].ira;
		}
		//pegando o maior peso, maior altura e maior ira
		if(studentData[i].weight > largerWeight){
			largerWeight =  studentData[i].weight;
			DataName[i] = studentData[i].name;
		}
		
		if(studentData[i].height > largerHeight){
			largerHeight = studentData[i].height;
			DataName[i] = studentData[i].name;
		}
		
		if(studentData[i].ira > largerIra){
			largerIra = studentData[i].ira;
			DataName[i] = studentData[i].name;
		}

	}
	
	mediaWeight = countWeight/numStudent;
	mediaHeight = countHeight/numStudent;
	mediaIra    = countIra/numStudent; 
	
	printf("\n");
	printf(" Media de Peso:   %.3f \n",mediaWeight);
	printf(" Media de Altura: %.3f \n",mediaHeight);
	printf(" Media de Ira: %.3f \n",mediaIra);
	printf("\n");
	printf(" Maior Peso: %.3f \n", largerWeight);
	printf(" Maior Altura: %.3f \n", largerHeight);
	printf(" Maior IRA:  %.3f \n", largerIra);		
	
	return 0;
}
