//Escribir un programa en C que implemente una funci�n para calcular la potencia de un n�mero.
// La funci�n debe recibir como par�metros la base y el exponente y regresar la potencia calculada.
#include "stdio.h"
int expo(int base, int potencia);
int main (void){
	int base,potencia;
	printf("Dame la base: ");
	scanf("%d",&base);
	printf("Dame la Potencia: ");
	scanf("%d",&potencia);
	
	
	printf("%d",expo(base,potencia));
	return 0;
} 
 
 int expo(int base, int potencia){
 	int i,x,res=1;
 		for(i=0; i<potencia ;i++){
 			res = res *base;
		 }
 	return (res);
 }
 
 
 
 


