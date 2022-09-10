/*
 ============================================================================
 Name        : Clase2_Ejercicio2.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio2 - Clase 2
 Description :

Ejercicio 2:
Crear una función que reciba como parámetro dos números enteros, que realice el promedio de los números y que retorne dicho valor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float Promedio(int, int);
int IngreseUnNumero();
int suma(int, int);

int main()
{
	setbuf(stdout, NULL);

	int numeroA;
	int numeroB;
	float promedio;

	numeroA = IngreseUnNumero();
	numeroB = IngreseUnNumero();
	promedio = Promedio(numeroA, numeroB);

	printf("El promedio es de : %.2f", promedio);

	return 0;
}

float Promedio(int numeroA, int numeroB)
{
	int sumaP;
	float promedio;

	sumaP = suma(numeroA, numeroB);

	promedio = (float)sumaP / 2;

	return promedio;
}


int IngreseUnNumero()
{
	int numero;

	printf("Ingrese un numero : ");

	scanf("%d", &numero);

	return numero;
}

int suma(int numeroA, int numeroB)
{
	int suma;

	suma = numeroA + numeroB;

	return suma;
}
