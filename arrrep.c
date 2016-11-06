#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

	int arr[10]={};
	int * aparr;
	int a;
	int cont=0;
	int num;

	printf("Programa que te dice cuantas veces se repite un numero en un arreglo\n");
	printf("Los numeros son en un rango del 1 al 100\n");
	printf("Que numero quieres saber si se repite?\n");
	scanf("%d", &num);


	aparr= arr;
	srand(time(NULL));


	

	for(a=0;a<10;a++)
	{
		*aparr += 1+rand()%100;
		printf("%d \n",arr[a] );
		aparr++;

		if(num==arr[a])
		{
			cont++;
			
		}
		
		}

		printf("Este numero %d se repite %d veces\n",num,cont );

	if (cont==0)
	{
		printf("Este numero %d no esta en el arreglo\n",num );
	}
	

	
	return 0;
}