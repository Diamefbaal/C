#include <stdio.h>


int main()
{
	int invitados;
	int precio=350;
	int total;

	printf("Programa que calcula el precio segun los invitados\n");
	printf("Cuantas personas son?\n");
	scanf("%d", &invitados);
	total= precio*invitados;
	printf("Si son %d personas costara %d pesos \n",  invitados,  total);
	return 0;
}