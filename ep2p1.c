
#include <stdio.h>
#include <stdlib.h>


int main()
{
  int a;
  int i;
  int par=2;
  int impar=1;
  int *apuna;
  int *apunb;
  int *apunc;
  
 
    
    
  printf("De que tamaño quieres los  arreglos? \n");
  scanf("%d",&a); 
  
  
  apuna=malloc(a*sizeof(int));
  apunb=malloc(a*sizeof(int));
  apunc=malloc(a*sizeof(int));
  
  for(i=0;i<a;i++)
  {
    
    apuna[i]=par;
    par=par+2;
    printf("%d ",apuna[i]);
  
    
  }
  
  printf("\n");
  
  for(i=0;i<a;i++)
  {

    apunb[i]=impar;
    impar=impar+2;
    printf("%d ", apunb[i]);
    
      
  }
  
  printf("\n");
  
  apunc[0]=apuna[a-1] * apunb[0];  
  
    for(i=0;i<a;i++)
    {
      apunc[i+1]= apuna[i] * apunb[i+1];
      printf("%d ",apunc[i]);  
      
    }

  printf("\n");
  
  free (apuna);
  free (apunb);
  
  return 0; 
}
