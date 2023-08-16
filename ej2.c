#include <stdio.h>
#include <stdlib.h>
	void periare (int a, int b ){
	float  peri= 2*a+2*b ;
	float area=a*b;
	printf("El perimetro es: %.2f \n ",peri);
	printf("El area es: %.2f \n ",area );
}


int main (){
	float  a ,b;
	
	
	printf("Ingrese valor a : \n ");
	scanf("%f",&a);
	
	printf("Ingrese valor b : \n ");
	scanf("%f",&b);
	
	
	periare(a,b);
	
	
	
	system ("pause");
	return 0;
}
