#include <stdio.h>
#include <math.h>

int suma (int a, int b, int sum);
int resta (int a, int b, int res);
int multiplicacion (int a, int b, int mul);
double division (double c, double d, double div);
double residuo (double c, double d, double mod);
double potencia (double c, double d, double pot);
int main()
{
	int a;
	int b;
	double c;
	double d;
	int sum;
	int res;
	int mul;
	double div;
	double pot;
	double mod;
	int operador;

	printf("Calculadora basica \n");
	printf("Escriba 1 para suma \n");
	printf("Escriba 2 para resta \n");
	printf("Escriba 3 para multiplicacion \n");
	printf("Escriba 4 para la division \n");
	printf("Escriba 5 para sacar el residuo de una division\n");
	printf("Escriba 6 para sacar potencia \n");
	scanf("%d",&operador);
	if(operador==1 )
	{	
		printf("Dame un numero \n");
		scanf("%d",&a);
		printf("Dame otro numero \n");
		scanf("%d",&b);
		printf("La suma de los numeros es %d \n", suma (a,b,sum));
	}
	if(operador==2)
	{
		printf("Dame un numero \n");
		scanf("%d",&a);
		printf("Dame otro numero \n");
		scanf("%d",&b);
		printf("La resta de los numeros es %d \n", resta (a,b,res));
	}
	if(operador==3)
	{
		printf("Dame un numero \n");
		scanf("%d",&a);
		printf("Dame otro numero \n");
		scanf("%d",&b);
		printf("La multiplicacion de los numeros es %d \n", multiplicacion(a,b,mul));
	}
	if(operador==4)
	{
		printf("Dame un numero \n");
		scanf("%lf",&c);
		printf("Dame otro numero \n");
		scanf("%lf",&d);
		printf("La division de los numeros es %lf \n", division(c,d,div));
	}
	if(operador==5)
	{
		printf("Dame un numero \n");
		scanf("%lf",&c);
		printf("Dame otro numero \n");
		scanf("%lf",&d);
		printf("El residuo es %lf\n", residuo(c,d,mod));
	}
	if(operador==6)
	{
		printf("¿Que numero quieres elevar a una potencia? \n");
		scanf("%lf",&c);
		printf("¿A que potencia lo quieres elevar? \n");
		scanf("%lf",&d);
		printf("%lf elevado a la potencia %lf es %lf \n",c,d,potencia(c,d,pot));
	}
	if(operador>=7)
	{
		printf("Error operacion no existente \n");
		printf("Pruebe de nuevo \n");
	}
}

 int suma (int a, int b, int sum)
 {
 	sum= a+b;
 	return sum;
 }
 int resta (int a, int b, int res)
 {
 	res= a-b;
 	return res;
 }
 int multiplicacion(int a, int b, int mul)
 {
 	mul= a*b;
 	return mul;
 }
double division(double c, double d, double div)
{
	div= c/d;
	return div;
}
double residuo(double c, double d, double mod)
{
	mod= fmod(c,d) ;
	return mod;
}
double potencia(double c, double d, double pot)
{
	pot= pow(c,d);
	return pot;
}