/*
 ============================================================================
 Name        : Clase2_Ejercicio4.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio 4 - Clase 2
 Description :

Ejercicio 4:
Realizar un programa que permita el ingreso de 10 números enteros.
Determinar:
El promedio de los positivos
La cantidad de ceros
Del menor de los negativos la suma de los antecesores de ese valor (frenar en cero).
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float Promedio(int);
int IngreseUnNumero();
int ValidarNumeroPositivos(int);
int SumarDelMenorNegativo(int);

int main()
{
	setbuf(stdout, NULL);

	int numero;
	int auxMenor;
	int valor;
	int contCero = 0;
	int acumularPositivos = 0;
	int sumaAntecesores = 0;
	float promedio;

	for(int i = 0; i < 10; i++)
	{
		numero = IngreseUnNumero();

		valor = ValidarNumeroPositivos(numero);

		switch(valor)
		{
			case 1:
				acumularPositivos += numero;
				break;
			case -1:
				if(i == 0 || numero < auxMenor)
				{
					auxMenor = numero;
				}
				break;
			default:
				contCero++;
		}
	}

	sumaAntecesores = SumarDelMenorNegativo(auxMenor);
	promedio = Promedio(acumularPositivos);

	printf("El promedio es %.2f", promedio);
	printf("\nCantidad de 0 : %d", contCero);
	printf("\nDel menor de los negativos %d la suma de los antecesores es : %d", auxMenor, sumaAntecesores);

	return 0;
}


float Promedio(int acumualdor)
{
	float promedio;

	promedio = (float)acumualdor / 10;

	return promedio;
}


int IngreseUnNumero()
{
	int numero;

	printf("Ingrese un numero : ");

	scanf("%d", &numero);

	return numero;
}


int ValidarNumeroPositivos(int numero)
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

int SumarDelMenorNegativo(int menor)
{
	int sumaAntecesores = 0;

	for(int i = menor; i <= 0; i++)
	{
		sumaAntecesores += i;
	}

	return sumaAntecesores;
}

