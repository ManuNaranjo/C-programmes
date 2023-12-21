/*
**     Fichero:  <hexDec8.c>
**       Autor:  <Manuel Naranjo Carrizosa>
**       Fecha:  <28/11/2018>
**
** Descripcion:  <Conversion de numeros hexadecimales a decimales>
*/

/* Includes del sistema */ 
#include <stdio.h>

/* Includes de la aplicacion */



/* Definición de constantes */
#define CTE 16
#define SINERROR 1
#define CONERROR 0
#define SALIR 1
#define REPETIR 0
#define INTRODUCIRDIGITOS "Caracteres hexadecimales: "
#define IMPRIMIRVALOR "Valor Hexadecimal: 0x%c%c, Valor Decimal: %d\n"
#define ERROR1 "Primer valor introducido erroneo\n"
#define ERROR2 "Segundo valor introducido erroneo\n"


/* Tipos definidos por el usuario */


/* Declaración de funciones locales. Para cada función: */
int hexDec(char car1,char car2);
int comprueba(char * a,char * b);

/************************************************************/

int main()
{
  char car1;
  char car2;
  int control;
  int result;
  char * x = &car1;
  char * y = &car2;
  
  
    do
      {
   
	control = comprueba(x,y);

  if(control == 1)
    result = hexDec(car1,car2);

      }
    while(control != 0);
    
    

  
  
  
    
  


  return 0;
}


int hexDec(char car1,char car2)  /*Esta funcion devuelve un numero decimal al 
                                  realizar la conversion desde un numero 
                                  hexadecimal bajo la premisa de que la resta
                                  de dos caracteres da como resultado un 
                                  numero entero */
{
  int valor;
  int valor1;
  int valor2;

  
if(('0' <= car1) && (car1 <= '9'))
    valor1 = car1 - '0';
  else
    {
      if(('a' <= car1) && (car1 <= 'f'))
	valor1 = car1 -'a' + 10;

      else
	{
	  if(('A' <= car1 ) && (car1 <= 'F'))
	  valor1 = car1 -'A' + 10;

	  
	    }
	}
    


 if(('0' <= car2) && (car2 <= '9'))
    valor2 = car2 - '0';
  else
    {
      if(('a' <= car2) && (car2 <= 'f'))
      valor2 = car2 -'a' + 10;
      else
	{
	  if (('A' <= car2) && (car2 <= 'F'))
	    valor2 = car2 - 'A' + 10;
	 }
    }

      valor = CTE*valor1 + valor2;

return valor;
}




int comprueba(char * a,char * b)
{
  int result;
  int salir;
  int cuno;
  int cdos;

  printf(INTRODUCIRDIGITOS);
 scanf("\n%c%c",*a,*b);

 do
    {
      
    if((*a == 'N') && (*b == 'A'))
      result = 0;
    
  
if (!((('0' <= *a) && (*a <= '9')) || (('a' <= *a) && (*a <= 'f')) || (('A' <= *a ) && (*a <= 'F'))))

	cuno = CONERROR;


 if (!((('0' <=*b) && (*b <= '9')) || (('a' <= *b) && (*b <= 'f')) ||  (('A' <= *b) && (*b <= 'F'))))

	cdos = CONERROR;




 if (cuno == CONERROR)
   {
   printf(ERROR1);
 salir = REPETIR;
   }
                          
if(cdos == CONERROR)
  {
    printf(ERROR2);
 salir = REPETIR
   }

 if((cuno == SINERROR) && (cdos == SINERROR))
   {
   result = 1;
 salir = SALIR;
 }
 
	     
    
    
}
  while(salir == REPETIR)

    return result;
}


