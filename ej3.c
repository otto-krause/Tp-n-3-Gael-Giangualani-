#include <stdio.h>
#include <stdlib.h>

void porcen (int  homb, int  muj ) {
	int totp=homb+muj;
	float porcenhomb=(homb*100.0)/totp;
	printf("Porcentaje de hombre es : %.2f \n ",porcenhomb);
	
	float porcenmuj=(muj*100.0)/totp;
	printf("Porcentaje de mujeres  es : %.2f \n ",porcenmuj);
	
	
	
}

int main (){
	int homb,muj;
	
	
	
	printf("Ingrese hombres que enviaron curriculum :");
	scanf("%d",&homb);
	
	printf("Ingrese mujeres que enviaron curriculum :");
	scanf("%d",&muj); 
	
	porcen ( homb, muj );
	
	
	system ("pause");
	return 0;
}
