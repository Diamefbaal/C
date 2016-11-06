#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int*arr;
	int j;

	scanf("%d", a);
	arr=malloc(a*sizeof(int));

	for(j=0;j<a;j++)
	{
		printf("%d \n",arr[j] );
	}
	free (arr);


	return 0;
}