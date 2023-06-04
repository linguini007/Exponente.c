//Escribir un programa en C que implemente una función para calcular la potencia de un número.
// La función debe recibir como parámetros la base y el exponente y regresar la potencia calculada.
#include "stdio.h"
//DECLARACION DE LA FUNCION
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
 //FUNCION DE TIPO ENTERO
 int expo(int base, int potencia){
 	int i,x,res=1;
 		for(i=0; i<potencia ;i++){
 			res = res *base;
		 }
 	return (res);
 }
 
 
 
 


