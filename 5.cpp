/*
Programa: Calcular la potencia 
Fecha: 11/09/2018
Creado: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
//Funcion para sacar la potencia e imprimir el resultado
int funpot(int c, int d)
{
	int resultado;
	resultado = pow(c,d);
	printf("El resultado es: %d\n",resultado); 
	return resultado;
}
//Funcion principal
int main() 
{
	//Definicion de variables
	int a, b;
	//Captura de datos
	printf ("Ingrese un numero \n"); 
	scanf ("%d", &a);
	printf ("Ingrese su potencia \n"); 
	scanf ("%d", &b);
	//LLamada de la funcion funpot
	funpot(a,b);
	return 0;
}

