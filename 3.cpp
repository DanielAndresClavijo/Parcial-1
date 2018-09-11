/*
Programa: Identificar la cantidad de vocales de un nombre 
y mostrar cual tiene mas caracteres y cual tiene menos caracteres
Fecha:08/09/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	//Definicion de variables
	char nombre1[100], nombre2[100];
	int cantidad1, cantidad2;
	//Ingreso de datos del usuario
	printf("Ingrese un nombre\n");
	gets(nombre1);
	printf("Ingrese otro nombre\n");
	gets(nombre2);
	//Calculo de la cantidad de caracteres e imprimir el resultado
	cantidad1 = strlen(nombre1);
	cantidad2 = strlen(nombre2);
	printf("%s tiene %d caracteres y ",nombre1, cantidad1);
	printf("%s tiene %d caracteres\n \n \n",nombre2, cantidad2);
	//condiciones para identificar que nombre tiene mas caractere que el otro
	if(cantidad1>cantidad2)
	{
		printf("%s tiene mas caracteres que %s y ",nombre1, nombre2);
		printf("%s tiene menos caracteres que %s",nombre2, nombre1);
	}
	if(cantidad1<cantidad2)
	{
		printf("%s tiene mas caracteres que %s y ",nombre2, nombre1);
		printf("%s tiene menos caracteres que %s",nombre1, nombre2);
	}
	if(cantidad1==cantidad2)
	{
		printf("Los dos nombres tienen la misma cantidad de caracteres");
	}
	return 0;
}
