#include <stdio.h>

int main (){

   int a[14], i, *p;

   p = a;

   for(i =0; i < sizeof(a)/sizeof(a[0]); i ++)
   {
    p = p + i;
    p++;
   }

    for ( i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
     if (i % 2 ==0)
     {
       printf("arr[%d]   =   %d\n", i, *p +i);
     }
     
    }
    
    
 
    
    return 0;
}