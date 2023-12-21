/*
**     Fichero:  tablasMultidim3.c
**       Autor:  Departamento de Ingeniería Telemática
**       Fecha:  25-noviembre-2018
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
**                        En este caso el parámetro es del tipo tabla,
**                        aprovechando que los elementos de una tabla
**                        multidimensional son todos consecutivos,
**                        como los de una tabla unidimensional.
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
void muestraTabla3(char *tabla, int nfil, int ncol);


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
  
  muestraTabla3(tabla[0], NCOL, NFIL);
  printf("\n");
  muestraTabla3(&tabla[0][0], NFIL, NCOL);
	
  return 0;
}

void muestraTabla3( char *tabla, int nfil, int ncol)
{
  int i;
  int j;

  for(i = 0;i < nfil;i++)
    {
      for(j = 0;j < ncol;j++)
	{
	  printf("%c",tabla[i*ncol + j]);
	}
      printf("\n");
    }

  

}
