#include <stdio.h>

int main ()
{
  int num1;
  int num2;
  int num3;

  printf ("Escribe el primer numero: \n");
  scanf ("%i", num1);
  printf ("Escribe el segundo numero; \n");
  scanf ("%i", num2);
  printf ("Escribe el tercer numero: \n");
  scanf ("%i", num3);

  if (num3==(num1+num2))
  {
    printf ("La suma del numero %i y el numero %i es igual a %i", num1, num2, num3);
  }
  else 
  {
    printf ("La suma del numero %i y el numero %i no es igual a %i", num1, num2, num3);
  }
  return 0;
}
