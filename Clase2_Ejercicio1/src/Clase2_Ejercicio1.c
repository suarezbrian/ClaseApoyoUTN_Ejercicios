/*
 ============================================================================
 Name        : Clase2_Ejercicio1.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio 1 - Clase 2
 Description :

Ejercicio 1:
Crear una función que le solicite al usuario el ingreso de un numero y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IngreseUnNumero();

int main()
{
	setbuf(stdout, NULL);

	int numero;

	numero = IngreseUnNumero();

	printf("El numero es : %d", numero);

	return 0;
}

int IngreseUnNumero()
{
	int numero;

	printf("Ingrese un numero : ");

	scanf("%d", &numero);

	return numero;
}
