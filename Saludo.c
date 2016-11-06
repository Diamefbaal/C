#include <stdio.h>

int main ()
{
	int hora;
	printf ("¿Que hora es? \n");
	scanf ("%d",&hora);

	if ((hora>=0)&(hora<=12))
		{
		printf ("Buenos Dias \n");
		}
		else if ((hora>12)&(hora<=19))
		{
		printf ("Buenas Tardes \n");
		}
		else if ((hora>19)&(hora<=24))
		{
			printf("Buenas Noches \n");
		}
		else 
		{
		printf ("Error \n");
		}

	return 0;
}