#include <stdio.h>

int main()
{
	int a;
	double b;
	char c;
	float d;


	sizeof(a);
	printf("Un dato de tipo int pesa %d bytes\n",sizeof(a));

	sizeof(b);
	printf("Un dato de tipo double pesa %d bytes \n",sizeof(b));

	sizeof(c);
	printf("Un dato de tipo char pesa %d bytes \n",sizeof(c));

	sizeof(d);
	printf("Un dato de tipo float pesa %d bytes \n",sizeof(d));
	return 0;
}