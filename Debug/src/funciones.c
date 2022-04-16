#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"


int pedirNumero(char mensaje[])
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);

    return numero;
}
float pedirFlotante(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f", &numero);

    return numero;
}
float CalcularCredito(float numero, float interes)
{
	float precioInteres;
	float precioConInteresCalculado;

	precioInteres=numero* interes;
	precioConInteresCalculado = numero + precioInteres;

	return precioConInteresCalculado;
}

float CalcularDebito(float numero, float descuento)
{
	float precioDescuento;

	descuento = numero * descuento;
	precioDescuento = numero - descuento;


	return precioDescuento;
}
float CalcularBtc(float numero1,float numero2)
{
	float precioConBitcoin;
	float btc=40217.67;

	precioConBitcoin = numero1 / btc;

	return precioConBitcoin;
}
float PrecioPorKM(int x,float numero)
{
	float precioUnitario;

	precioUnitario = numero / x;

	return precioUnitario;
}
float DiferenciaDePrecio(float numero1,float numero2)
{
	float resultado;
	if(numero1>numero2)
	{
		resultado=numero1-numero2;
	}else
	{
		resultado=numero2-numero1;
	}
	return resultado;
}
