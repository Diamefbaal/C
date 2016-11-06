#include <stdio.h>

int salario(int horas, int pago, int total);

int main ()
{
	int horas;
	int pago;
	int total;

	printf("¿Cuantas horas trabajo? \n");
	scanf("%d", &horas);

	printf("Tu salario es de: %d", salario(horas, pago, total));
}

int salario (int horas, int pago, int total)
{
	if (horas<=50)
	{
		pago = horas*280;
		return pago;
	}
	else if (horas>50)
	{
		total = 14000+((horas-50)*(350));
		return total;
	}

}