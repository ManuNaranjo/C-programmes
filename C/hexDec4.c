/*
**     Fichero:  <hexDec3.c>
**       Autor:  <Manuel Naranjo Carrizosa>
**       Fecha:  <02/11/2018>
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


/* Tipos definidos por el usuario */


/* Declaración de funciones locales. Para cada función: */
/*
**   Parámetros:  <tipo1> <parm1> <Descripción>
**                <tipo2> <parm2> <Descripción>
**                ...
**     Devuelve:  <tipo> <Descripción>
**
**  Descripción:  <Descripción>
*/

/************************************************************/

int main()
{
  char car1;
  char car2;
  int valor;
  int valor1;
  int valor2;
  int cuno;
  int cdos;
  int salir;
  
  do
    {
      cuno = SINERROR;
      cdos = SINERROR;
  
  printf("Introduzca dos digitos hexadecimales: ");
  scanf("\n%c%c",&car1,&car2);

  if((car1 == 'N') && (car2 == 'A'))
    salir = SALIR;
  else
    {
      salir = REPETIR;
    
  

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

	  else
	    {
	      cuno = CONERROR;
	    }
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
	  else
	    {
	      cdos = CONERROR;
	    }
	}
    }

  valor = CTE*valor1 + valor2;



	   
	     
if (cuno == CONERROR)
    printf("Primer valor introducido erroneo\n");

if(cdos == CONERROR)
    printf("Segundo valor introducido erroneo\n");

 if((cuno == SINERROR) && (cdos == SINERROR))

printf("Valor Hexadecimal: 0x%c%c, Valor Decimal: %d\n",car1,car2,valor);
	     
    
    }
}
  while(salir == REPETIR);
    
      

  return 0;
}

