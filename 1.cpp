/*
Programa: Calcular el desempeño de las pruebas de suficiencia 
de los empleados
Fecha: 11/09/2018
Creado: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{
	//Definicion de variables
	float NpreguntasR, NpreguntasA, p, pf, i=0;//pf=porcentaje final, p=porcentaje
	char n='n', s='s',ns; 
	//Ciclo while
	while(i==0)
	{
		//Captura de datos
		printf("Ingrese el numero de preguntas realizadas\n");
		scanf("%f", &NpreguntasR);
		printf("Ingrese el numero de preguntas acertadas\n");
		scanf("%f", &NpreguntasA);
		//Operacion para sacar e imprimir el porcentaje
		p = NpreguntasA/NpreguntasR;
		pf= p*100;
		printf("Su porcentaje es de: %.0f%%\n ",pf);
		//Condicion para imprimir el nivel de calificacion 
		if(pf>=80)
		{
			printf("Nivel maximo\n");
		}else if(pf>=65 && pf<80)
		{
			printf("Nivel medio\n");
		}else if(pf>=40 && pf<65)
		{
			printf("Nivel regular\n");
		}else if(pf<40)
		{
			printf("Fuera de nivel\n");
		}
		//Imprir mensaje para seguir operacion o cancelarla
		printf("¿Desea seguir esta operacion?\n[s/n]: ");
		scanf("%s", &ns);
		printf("\n");
		//Condicion para verificar que hacer cuando el usuario decida si quiere segui o no
		if(ns==n)
		{
			printf("Operacion finalizada");
			i=1;
		}else if(ns==s)
		{
			printf("Continua operacion\n \n");
		}else
		{
			printf("*******\tERROR\t*********\n A ingresado un dato incorrecto");
			i=1;
		}
	}
	
	return 0;
}
