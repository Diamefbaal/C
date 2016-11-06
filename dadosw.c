#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	printf("Programa que calcula 6000 tiros de un dado\n");
	int a;
	int tiros = 6000;
	int cont1=0;
	int cont2=0;
	int cont3=0;
	int cont4=0;
	int cont5=0;
	int cont6=0;	



	for(a=0;a<tiros;a++)
	{
		switch(1+rand()%6)
		{
			case 1:
				
				cont1++;
				;
				break;
			case 2:
				cont2++;
				
				break;
			case 3:
				cont3++;
				
				break;
			case 4:
				cont4++;
				
				break;
			case 5:
				cont5++;
				
				break;
			case 6:
				cont6++;
				
				break;
		

		}

	
	}
	printf ("Se repitio %d veces el 1 \n",cont1);
	printf("Se repitio %d veces el 2\n",cont2);
	printf("Se repitio %d veces el 3\n",cont3);
	printf("Se repitio %d veces el 4\n",cont4);
	printf("Se repitio %d veces el 5\n",cont5);
	printf("Se repitio %d veces el 6\n",cont6);



	return 0;
}
	