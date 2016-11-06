#include <stdio.h>
#include <stdlib.h>


void resizeArray (int **array, int*size)
{
	int * newArray;
	newArray =malloc(((*size)+1)*sizeof(int));
	int i= 0;
	
	for(i=0; i<(*size);i++)
	{
		newArray[i] = (*array)[i];
	}	
	
	(*size)=(*size)+1;
	free (*array);
	*array = newArray;
	
}


int main()
{
	int *arr;
	arr = malloc(max*sizeof(int));
	int max= 10;
	int numEle = 0;
	int i= 0;


	for (;i!=-1;)
	{
		scanf("&d", &i);
		if(i != -1)
		{
			arr[numEle]= i;
			numEle++;
		}

		if(numEle == max)
		{
			resizeArray(&arr, &max);
		}
	}
	
	for(int i=0 ; i<numEle; i++)
	{
		printf("%d \n",arr[i] );
	}

	printf("\n");
	free (arr);
	return 0;

}