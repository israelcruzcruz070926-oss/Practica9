/*programa1a.c*/
#include <stdio.h>
int main ()
{
   int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
   int indice = 0;
   printf("\tLista\n");
   while (indice < 5 ) // Acceso a cada elemento del arreglo unidimensional usando while
   {
     printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
     indice += 1; // Sentencia análoga a indice = indice + 1;
   }

   printf("\n");
   return 0;
}

/*programa1b.c*/

#include <stdio.h>
int main ()
{
     int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
     int indice = 0;
     printf("\tLista\n");
     do // Acceso a cada elemento del arreglo unidimensional usando do-while
     {
         printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
         indice += 1; // Sentencia análoga a indice = indice + 1;
     }
     while (indice < 5 );
     printf("\n");
     return 0;
}

/*Programa1c.c*/

#include <stdio.h>
int main ()
{

     int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
     int indice=0;
     printf("\tLista\n");
     // Acceso a cada elemento del arreglo unidimensional usando for
     for (indice = 0 ; indice < 5 ; indice++)
     {
         printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
     }

     printf("\n");
     return 0;
}
