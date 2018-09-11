/*
Programa: 
Fecha: 11/09/2018
Creado: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables
	int i=1, n, par=0, imp=0;
	//Ciclo while para capturar numeros 
	while(i==1)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &n);
		//Condicion para saber que numero es par o impar
		if(n%2==0 && n!=0)
		{
			printf("El numero es par\n \n");
			par++;
		}else if(n%2==1)
		{
			printf("El numero es impar\n \n");
			imp++;
		} 
		if(n==0)
		{
			printf("\n \n");
			i=0;
		}
	}
	//Imprimir cuantos buneros son pares e impares
	printf("Hay %d numeros pares\n", par);
	printf("Hay %d numeros impares\n", imp);
	
	return 0;
}
