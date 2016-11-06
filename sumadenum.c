#include <stdio.h>

int main ()
{
  int num1;
  int num2;
  int num3;
  int a = 0;
  
  printf ("Escribe el primer numero: \n");
  scanf ("%d", &num1);
  printf ("Escribe el segundo numero; \n");
  scanf ("%d", &num2);
  printf ("Escribe el tercer numero: \n");
  scanf ("%d", &num3);

  a = num1 + num2;
  
  if (num3==a)
  {
    printf ("La suma del numero %d y el numero %d es igual a %d", num1, num2, num3);
  }
  else 
  {
    printf ("La suma del numero %d y el numero %d no es igual a %d", num1, num2, num3);
  }
  return 0;
}