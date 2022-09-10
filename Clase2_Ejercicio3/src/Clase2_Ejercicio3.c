/*
 ============================================================================
 Name        : Clase2_Ejercicio3.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio 3 - Clase 2
 Description :

Ejercicio 3:
Crear una función que reciba como parámetro un número entero.
La función retorna 1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en caso de que sea 0.
Realizar la prueba lógica de la función en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ValidarNumero(int);
int IngreseUnNumero();

int main()
{
	setbuf(stdout, NULL);

	int numero;
	int valor;

	numero = IngreseUnNumero();
	valor = ValidarNumero(numero);

	switch(valor)
	{
		case 1:
			printf("El numero %d es positivo",numero);
			break;
		case -1:
			printf("El numero %d es negativo", numero);
			break;
		default:
			printf("El numero %d es igual a 0", numero);
	}

	return 0;
}

int ValidarNumero(int numero)
{
	int valor;

	if(numero > 0)
	{
		 valor = 1;

		 return valor;
	}
	else if(numero < 0)
	{
		valor = -1;

		return valor;
	}

	valor = 0;

	return valor;
}


int IngreseUnNumero()
{
	int numero;

	printf("Ingrese un numero : ");

	scanf("%d", &numero);

	return numero;
}
