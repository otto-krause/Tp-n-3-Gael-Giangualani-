#include <stdio.h>
#include <stdlib.h>
void n (float a ) ;

int main (){
	float a;
	
	printf("Ingrese un numero  :");
	scanf("%f",&a);
	n (a);
	
	
	system ("pause");
	return 0; 
}
void n  (float a){
	float nume=0;
	nume= a/8;
	
	printf("La octava parte es : %.2f \n ",nume);
	
}

