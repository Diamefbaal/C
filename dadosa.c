#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int arreglo[6000]={};
	
	int i;
	int ran;
	int cara1=0;
	int cara2=0;
	int cara3=0;
	int cara4=0;
	int cara5=0;
	int cara6=0;
	srand(time(NULL));


	
	

	for(i=0;i<6000;i++)
	{
		ran=1+rand()%6;
		arreglo[i]=ran;
		printf("%d\n",arreglo[i] );

		if(arreglo[i]==1)
		{
			cara1++;
		}
		if(arreglo[i]==2)
		{
			cara2++;
		}
		if(arreglo[i]==3)
		{
			cara3++;
		}
		if(arreglo[i]==4)
		{
			cara4++;
		}
		if(arreglo[i]==5)
		{
			cara5++;
		}
		if(arreglo[i]==6)
		{
			cara6++;
		}

	}
	printf("El 1 se repitio %d veces\n",cara1);
	printf("El 2 se repitio %d veces\n",cara2);
	printf("El 3 se repitio %d veces\n",cara3);
	printf("El 4 se repitio %d veces\n",cara4);
	printf("El 5 se repitio %d veces\n",cara5);
	printf("El 6 se repitio %d veces\n",cara6);

	return 0;
}
	