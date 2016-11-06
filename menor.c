#include <stdio.h>

int funcion (int num1, int num2, int num3);

int main ()
{
    int num1;
    int num2;
    int num3;

    printf("El numero mas chico es: %d \n", funcion(num1, num2, num3));

}

int funcion (int num1, int num2, int num3)
{
    while (num1>=0)
    {
        printf("Introduce el numero: \n");
        scanf("%d",&num1);


        if (num1<=-1)
        {
            num3 = num1;
        }

        else if ((num1<num2)&(num1>=0)&(num2>=0))
        {
            num2=num1;
        }
        else if ((num1>num2)&(num1>=0)&(num2>=0))
        {
            num1=num2;
        }
    }
    return num2;
}