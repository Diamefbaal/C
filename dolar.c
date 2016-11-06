#include <stdio.h>
#include <math.h>

float dolar (float num_1, float suma, float num_2);
float dolcan (float num_1, float resta, float num_2);
float euro (float num_1, float multiplicacion, float num_2);
float libra (float division, float num_1, float num_2);


float main ()
{
  float operacion;
  float num_1;
  float num_2;
  float suma;
  float resta;
  float multiplicacion;
  float division;

  
  printf ("Introduzca el numero de la conversion que necesita: \n");
  printf ("1. Convertir de pesos a dolares  \n");
  printf ("2. Convertir de pesos a dolares canadienses \n");
  printf ("3. Convertir de pesos a euros \n");
  printf ("4. Convertir de pesos a libras \n");

  scanf ("%f", &operacion);
  
  if (operacion==1)
  {
    printf ("La conversion a dolares es: %f \n", dolar (num_1, suma, num_2));
  }
  if (operacion==2)
  {
    printf ("La conversion a dolares canadienses es: %f \n", dolcan (num_1, resta, num_2));
  }
  if (operacion==3)
  {
     printf ("La conversion a euros es: %f \n", euro (num_1, multiplicacion, num_2));
  }
  if (operacion==4)
  {
     printf ("La conversion a libras es: %f \n", libra (division, num_1, num_2));
  }

  
}

float dolar (float num_1, float suma, float num_2)
{

    printf ("Escribe la cantidad que deseas convertir: \n");  
    scanf ("%f",&num_1);

    
    suma = num_1*0.05;
 
  
  return suma;

}
float dolcan (float num_1, float resta, float num_2)
{

  printf ("Escribe la cantidad que deseas convertir: \n");  
  scanf ("%f",&num_1);

  resta = num_1*0.06;
  
  return resta;
}

float euro (float num_1, float multiplicacion, float num_2)
{

  printf ("Escribe la cantidad que deseas convertir: \n");  
  scanf ("%f",&num_1);

  multiplicacion = num_1*0.04;
  
  return multiplicacion;
}

float libra (float division, float num_1, float num_2)
{
  printf ("Escribe la cantidad que deseas convertir: \n");  
  scanf ("%f",&num_1);

  division = num_1*0.03;
  return division;
}

