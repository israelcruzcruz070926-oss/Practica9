/*Israel Cruz Cruz
Ejercicio 2 laboratorio
arreglos y validación*/
#include <stdio.h>
int main ()
{
 int lista[10]; // Se declara el arreglo unidimensional
 int indice=0;
 int numeroElementos=0;
 printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
 scanf("%d",&numeroElementos);
 if((numeroElementos>=1) && (numeroElementos<=10))
 {
// Se almacena un número en cada elemento del arreglo unidimensional usando for
 for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
 {
 printf("\nDar un número entero para el elemento %d del arreglo ", indice );
 scanf("%d",&lista[indice]);
 }
 printf("\nLos valores dados son: \n");
 // Se muestra el número almacenado en cada elemento del arreglo unidimensional usando for
 for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
 {
 printf("%d ", lista[indice] );
 }
 }
 else printf("el valor dado no es válido");
 printf("\n");
 return 0;
}

//CÓDIGO MODIFICADO
#include <stdio.h>
int main ()
{

 int lista[10],elem=0;
//validaión
do
{
    printf("Dame un numero entre 1 y 10 para indicar la longitud del arreglo: ");
    scanf("%i", &elem);
} 
  while (elem <1 || elem>10); // de esta forma hace que el ususario entre en razón
  for (int i=0; i<elem; i++)
{
    printf("Da un numero entero para el elemento %i del arreglo: ",i+1);
    scanf("%i", &lista[i]);
}
    printf("los valores de la lista son: \n");
  for (int j=0; j<elem; j++)
  {
    printf("%i", lista[j]);
  }
printf("\n\n");
return 0;
}
