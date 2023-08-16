#include <stdio.h>
#include <stdlib.h>

void presion (float area, float fuer ) ;

int main (){
	float area=0,fuer=0;
	
	
	printf("ingrese valor de la fuerza :\n  ");
	scanf("%f",&fuer); 
	
	
	printf("Ingrese valor de area: \n  ");
	scanf("%f",&area);

	
	
	presion (area ,fuer);
	system("pause");
	return 0;
}
void presion (float area ,float fuer ){
	float p=0;
	p=fuer/area ; 
	
	printf("La presion es : %.2f \n ",p);
	
	
}
