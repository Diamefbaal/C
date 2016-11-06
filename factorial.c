#include <stdio.h>

int main (){

int num;
int cont;


printf("Programa de factoriales \n");

printf("introduzca un numero \n");
scanf("%d", &num);

cont=num-1;
while (cont>=1) {
 num=num*cont;
  cont--;
}

printf("El resultado es %d \n",num);



  return 0;
}
