/*
**     Fichero:  tablasMultidim2.c
**       Autor:  Manuel Naranjo Carrizosa
**       Fecha:  05/122018
**
** Descripcion:  Implementa una función que imprime una tabla bidimensional
**               que se le pasa como parámetro.
*/

/* Includes del sistema */ 
#include <stdio.h>


/* Includes de la aplicacion */


/* Definición de constantes */ 
#define NFIL  6
#define NCOL  4


/* Tipos definidos por el usuario */


/* Declaración de funciones locales. */

/*
**   Parámetros:  tabla   tabla bidimensional que se desea imprimir.
**                        En este caso el parámetro es del tipo tabla
**                        bidimensional.
**                nfil    número de filas de la tabla bidimensional.
**                ncol    número de columnas de la tabla bidimensional.
**
**     Devuelve:  Nada
**
**  Descripcion:  Muestra los elementos de una tabla bidimensional que se
**                proporciona como parámetro.
**                Los elementos se muestran por filas 
**                mediante el uso de un doble bucle.
*/
void muestraTabla2(char tabla[][NCOL], int nfil, int ncol);


/************************************************************/

int main ()
{
  char tabla [ NFIL ][ NCOL ] = {    
    {'A', 'B', 'C', 'D'},
    {'E', 'F', 'G', 'H'},
    {'I', 'J', 'K', 'L'},
    {'M', 'N', 'O', 'P'},
    {'Q', 'R', 'S', 'T'},
    {'U', 'V', 'W', 'X'}
  };
  
  muestraTabla2(tabla, NFIL, NCOL);
	
  return 0;
}

void muestraTabla2(char (*tabla)[NCOL], int nfil, int ncol)
{
  int i;
  int j;
  
  for(i = 0;i < nfil;i++)
    {
      for(j = 0;j < ncol; j++)
	{
	  printf("%c",(*(tabla + i))[j]);
	    }
      printf("\n");
    }
 
  

}
