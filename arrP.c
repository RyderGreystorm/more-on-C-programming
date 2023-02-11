#include <stdio.h>

int main(){

    int arr[10];
    int i;
    int* pn;


    pn = arr;


    for ( i = 0; i < 10; i++) {
        *pn+=1;
        pn++;
    }


    for ( int  l = 0; l < 10; l++)
      printf("numbers[%d] = %d\n",l + 1, arr[l]);
    
    

    return 0;
}
