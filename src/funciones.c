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

/*void CargaForzada(int km, float y, float z,float tarjetaCreditoAerolineas, float tarjetaDebitoAerolineas,float precioBtcAerolineas,precioVuelosAerolineas, float tarjetaDebitoLatam, float tarjetaCreditoLatam, float precioBtcLatam)
{
	km=7090;
	y=162965;
	z=159339;

	tarjetaCreditoAerolineas=CreditoAerolineas(y);
	tarjetaDebitoAerolineas=DebitoAerolineas(y);
	precioBtcAerolineas=CalcularBtcAerolineas(y);
	precioVuelosAerolineas=PrecioUnitarioAerolineas(km, y);

	system("cls");
	printf("-El precio de Aerolineas es:%.2f",y);
	printf("\na) Precio con tarjeta de débito: %.2f", tarjetaDebitoAerolineas);
	printf("\nb) Precio con tarjeta de crédito: %.2f",tarjetaCreditoAerolineas);
	printf("\nc) Precio pagando con bitcoin : %f", precioBtcAerolineas);
	printf("\nd) Precio unitario: %.2f", precioVuelosAerolineas);

	printf("\n\n\n-El precio de Latam es:%.2f",z);
	printf("\na) Precio con tarjeta de débito: %.2f", tarjetaDebitoLatam);
	printf("\nb) Precio con tarjeta de crédito: %.2f", tarjetaCreditoLatam);
	printf("\nc) Precio pagando con bitcoin : %f", precioBtcLatam);
	printf("\nd) Precio unitario: %.2f", precioVuelosAerolineas);


}*/
