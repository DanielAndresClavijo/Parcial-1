/*
Programa: Multiplicar dos numero ingresado por el usuario
Fecha:08/09/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
//Funcion que hace la multipicacion e imprime el resultado
void mult(float n1, float n2)
{
	float R;
	R= n1*n2;
	printf("El resultado de multiplicar los dos numeros entre si, es: %.0f", R);
}
//Funcion principal 
int main()
{
	//Definicion de variables
	float num1, num2;
	//Captura de datos
	printf("Ingrese dos numeros\n");
	scanf("%f %f", &num1, &num2);
	//Llamada la funcion mult()
	mult(num1, num2);
	getch();
	return 0;
}
