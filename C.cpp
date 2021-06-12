#include <stdio.h>
#include <conio.h>//llamada a las librerias 


#define pi 3.141592 //declaracion de constantes
float radio, area; //declaracion de variables

main ()
{

	printf ("Ingrese radio del circulo:\n");
	scanf  ("%f", &radio);
	area =	pi * (radio * radio) ;
	printf ("El area del circulo es %f", area);
	
}
