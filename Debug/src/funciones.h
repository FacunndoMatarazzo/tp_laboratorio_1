
///\brief pide un numero entero, que corresponden a los kilometros
///\param mensaje que muestra para pedir los kilometros
///\
///\return devuelve los kilometros
int pedirNumero(char []);
/*///////////////////////////////////*/
///\brief pide un numero flotante, que corresponde a los precios de Aerolineas y Latam
///\param
///
/// \return devuelve el precio de cada uno de los vuelos
float pedirFlotante(char []);
/*///////////////////////////////////*/
///\brief calcula el interes de pagar con tarjeta de debito
///\param variable con valor de precio de Aerolineas=y
///\param variable con valor de precio de Latam=x
///\return	devuelve el precio con el interes calculado
float CalcularCredito(float,float);
/*///////////////////////////////////*/
///\21brief calcula el interes de pagar con tarjeta de debito
///\param variable con valor de precio de Aerolineas=y
///\param variable con valor de precio de Latam=x
///\return	devuelve el precio con el descuento calculado
float CalcularDebito(float,float);
/*///////////////////////////////////*/
///\brief recibe el ambos valores de los vuelos y los kilometros
///\param numero=precios
///\param x=kilometros
///\return valor por cada unidad
float PrecioPorKM(int,float);
/*///////////////////////////////////*/
///\brief calcula el precio en bitcoin a pagar de cada vuelo
///\param valor de los vuelos
///
///\return	devuelve el valor a pagar con por bitcoin
float CalcularBtc(float,float);
/*///////////////////////////////////*/
///\brief  recibe dos numeros, priorizando un resultado positivo
///\param numero1
///\param numero2
///\return devuelve el resultado de la diferencia entre los precios
float DiferenciaDePrecio(float,float);

int Validacion(int ,float ,float);
