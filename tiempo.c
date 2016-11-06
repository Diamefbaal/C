#include <stdio.h>
#include <math.h>

double formula (double tiempon,double velocidad,double velluz,double t);

int main()
{
double tiempon=1;
double velocidad;
double velluz =1079252848.799913645;
double t;

printf("Programa de la dilatacion del tiempo \n");
printf("Cual es la velocidad a la que se desea viajar (Km/h) \n");
scanf("%lf", &velocidad);
	
printf("La dilatacion temporal es de %lf \n", formula(tiempon,velocidad,velluz,t));
}

double formula (double tiempon,double velocidad,double velluz,double t )

{
t=tiempon*(sqrt((velocidad*velocidad)/(velluz*velluz)));
t=t*100;
return t;
}