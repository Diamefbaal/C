#include <stdio.h>

int factorial(int num);


int main()
{
	
	int num;
	
	

	printf("Programa que calcula el factorial de un numero \n");
	printf("¿De que numero quieres sacar el factorial?\n");
	scanf("%d",&num);



	printf("El factorial de %d es %d \n", num, factorial(num));

	return 0;
}



int factorial(int num)
{
	if(num <=1)
	{
		return 1;
	}

	return num*factorial(num-1);
}