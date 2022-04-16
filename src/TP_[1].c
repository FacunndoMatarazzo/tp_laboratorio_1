
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"


int main(){

	setbuf(stdout,NULL);

	int menu;
	int km;
	float y=0;
	float z=0;
	float precioVuelosAerolineas;
	float tarjetaDebitoAerolineas;
	float tarjetaCreditoAerolineas;
	float precioBtcAerolineas;
	float precioVuelosLatam;
	float tarjetaDebitoLatam;
	float tarjetaCreditoLatam;
	float precioBtcLatam;
	float descuento;
	float interes;
	float difenciaDePrecio;


	precioBtcAerolineas=0;
	precioBtcLatam=0;
	descuento=0.25;
	interes=0.10;
	precioVuelosLatam=0;
	precioVuelosAerolineas=0;
	tarjetaDebitoLatam=0;
	tarjetaCreditoLatam=0;


	do{
		printf("\n----Elija una opcion:----\n\n");
		printf("1.Ingresar Kilometros:\n");
		printf("2.Ingresar Precio de Vuelos:(Aerolineas=y,Latam=z)\n");
		printf("3.Calcular todos los costos:\n");
		printf("4.Informar Resultados\n");
		printf("5.Carga forzada\n");
		printf("6.Salir\n");
		fflush(stdin);
		scanf("%d",&menu);

		switch(menu)
		{
		case 1:
			km = pedirNumero("Los kilometros ingresados son:");
			break;
		case 2:

			y = pedirFlotante("-Precio vuelo Aerolineas:");
			z = pedirFlotante("-Precio vuelo Latam:");
			break;
		case 3:
			if(km!=0 && y!=0 && z!=0)
			{
				tarjetaCreditoAerolineas=CalcularCredito(y,interes);
				tarjetaDebitoAerolineas=CalcularDebito(y,descuento);
				precioBtcAerolineas=CalcularBtc(y);
				precioVuelosAerolineas=PrecioPorKM(y,km);
				tarjetaCreditoLatam=CalcularCredito(z,interes);
				tarjetaDebitoLatam=CalcularDebito(z,descuento);
				precioBtcLatam=CalcularBtc(z);
				precioVuelosLatam=PrecioPorKM(z,km);
				difenciaDePrecio=DiferenciaDePrecio(y, z);

			}else{
				printf("No se ingresaron los datos para hacer los calculos");
			}
			break;

		case 4:
			if(km==0 || y==0 || z==0){
				printf("Los kilometros ingresados son: %d km\n\n",km);
				printf("-El precio de Aerolineas es:$ %.2f",y);
				printf("\na) Precio con tarjeta de débito:$ %.2f",tarjetaDebitoAerolineas);
				printf("\nb) Precio con tarjeta de crédito:$ %.2f",tarjetaCreditoAerolineas);
				printf("\nc) Precio pagando con bitcoin:$ %.2f BTC",precioBtcAerolineas);
				printf("\nd) Mostrar precio unitario: %.2f",precioVuelosAerolineas);
				printf("\n---------------------------------");
				printf("\n\n-El precio de Latam es:$ %.2f",z);
				printf("\na) Precio con tarjeta de debito:$ %.2f",tarjetaDebitoLatam);
				printf("\nb) Precio con tarjeta de credito:$ %.2f",tarjetaCreditoLatam);
				printf("\nc) Precio pagando con bitcoin:$ %.2f BTC",precioBtcLatam);
				printf("\nd) Mostrar precio unitario:$ %.2f",precioVuelosLatam);
				printf("\n\nLa diferencia de precio es:$ %.2f",difenciaDePrecio);
			}else{
				printf("No se ingresaron los datos para hacer los calculos");
			}
		break;
		case 5:
			km=7090;
			y=162965;
			z=159339;
			printf("KMs Ingresados: %d",km);
			tarjetaCreditoAerolineas=CalcularCredito(y,interes);
			tarjetaDebitoAerolineas=CalcularDebito(y,descuento);
			precioBtcAerolineas=CalcularBtc(y);
			precioVuelosAerolineas=PrecioPorKM(y,km);
			tarjetaCreditoLatam=CalcularCredito(z,interes);
			tarjetaDebitoLatam=CalcularDebito(z,descuento);
			precioBtcLatam=CalcularBtc(z);
			precioVuelosLatam=PrecioPorKM(z,km);
			difenciaDePrecio=DiferenciaDePrecio(y, z);

			printf("\n-El precio de Aerolineas es:$ %.2f",y);
			printf("\na) Precio con tarjeta de debito:$ %.2f",tarjetaDebitoAerolineas);
			printf("\nb) Precio con tarjeta de credito:$ %.2f",tarjetaCreditoAerolineas);
			printf("\nc) Precio pagando con bitcoin:$ %.2f BTC",precioBtcAerolineas);
			printf("\nd) Mostrar precio unitario:$ %.2f",precioVuelosAerolineas);
			printf("\n---------------------------------");
			printf("\n\n-El precio de Latam es:$ %.2f",z);
			printf("\na) Precio con tarjeta de debito:$ %.2f",tarjetaDebitoLatam);
			printf("\nb) Precio con tarjeta de crédito:$ %.2f",tarjetaCreditoLatam);
			printf("\nc) Precio pagando con bitcoin:$ %.2f BTC",precioBtcLatam);
			printf("\nd) Mostrar precio unitario:$ %.2f",precioVuelosLatam);
			printf("\n\nLa diferencia de precio es:$ %2.f",difenciaDePrecio);
			break;
		default:
			printf("\nIngrese una opcion correcta...\n");
			break;
		}

	}while(menu!=6);
	printf("Gracias por pasarte...\n");

	return EXIT_SUCCESS;
}




