#include <stdio.h>
#include <stdlib.h>

void resist (float  r1, float  r2, float r3, float  r4, float r5){
	float  rt=r1+r2+r3+r4+r5;
	printf("La resistencia total es: %.2f \n",rt);
	printf("Las resistencias ingresadas son: \n %.2f \n %.2f \n %.2f \n %.2f \n %.2f \n ",r1,r2,r3,r4,r5);
}
int main (){
	float  r1,r2,r3,r4,r5,rt;
	printf("Ingrese  5 resistencias: \n");
	scanf("%f",&r1);
	scanf("%f",&r2);
	scanf("%f",&r3);
	scanf("%f",&r4);
	scanf("%f",&r5);
	resist(r1,r2,r3,r4,r5);
	
	system("pause");
	return 0;
}

