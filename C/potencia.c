/*
**     Fichero:  <potencia.c>
**       Autor:  <Manuel Naranjo Carrizosa>
**       Fecha:  <21-11-2018>
**
** Descripcion:  <Descripción sucinta del contenido del fichero>
*/

/* Includes del sistema */ 
#include <stdio.h>
#include "potencia.h"


/* Includes de la aplicacion */


/* Definición de constantes */
#define N_NATURALES 0
#define N_ENTEROS 1


/* Tipos definidos por el usuario */


/* Declaración de funciones locales. Para cada función: */
int potencia(int b,int exp);
int solicitaNumero(int numTipo);

/************************************************************/

int main()
{
  int b;
  int exp;
  
  printf(T_BASE);
  b = solicitaNumero(N_ENTEROS);
  printf(T_EXPONENTE);
  exp = solicitaNumero(N_NATURALES);

  printf(T_RESULTADO,b,exp,potencia(b,exp));
 
  

  

  return 0;
}

/* Definiciones de funciones  */

int potencia(int b,int exp)
{
  int i = 0;                  //variable contador
  int result = 1;

  if(exp != 0)                //Si el exponente es igual a 0,el resultado siempre es uno 
    {				       
  while(i < exp)           
    {
      result *=b;
      i++;
	}
    }
  else
    result = 1;

  return result;
}


int solicitaNumero(int numTipo)
{
  int a;
  
  if(numTipo == N_NATURALES)
    {
      do
	{                           /*Bucle hasta que introduzcamos un 
	                              numero positivo */
      printf(T_INTRODUZCA_NUMERO);
      scanf("%d",&a);
	}

      while(a < 0);  
	
    }

      else
	{
	  printf(T_INTRODUZCA_NUMERO2);
	  scanf("%d",&a);
	}

      return a;
}
    
      
	
      
  
  
  
      
      
