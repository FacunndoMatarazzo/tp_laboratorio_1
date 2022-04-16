#include <stdio.h>
#include <stdlib.h>
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
	float precioInteresAerolineas;

	precioInteres=numero* interes;
	precioInteresAerolineas = numero + precioInteres;

	return precioInteresAerolineas;
}

float CalcularDebito(float numero, float descuento)
{
	float precioDescuentoAerolineas;

	descuento = numero * descuento;
	precioDescuentoAerolineas = numero - descuento;


	return precioDescuentoAerolineas;
}
float CalcularBtc(float numero)
{
	float precioConBitcoin;
	float btc=39854;

	precioConBitcoin = numero / btc;

	return precioConBitcoin;
}
float PrecioPorKM(int km,float numero)
{
	float precioUnitarioAerolineas;

	precioUnitarioAerolineas = numero / km;

	return precioUnitarioAerolineas;
}
float DiferenciaDePrecio(float y,float z)
{
	float resultado;
	if(y>z)
	{
		resultado=y-z;
	}else
	{
		resultado=z-y;
	}
	return resultado;
}
