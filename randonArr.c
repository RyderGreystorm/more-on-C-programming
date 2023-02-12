#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//This code generates random arrars
int main(){

    srand(time(0));
    int ran = (rand()% 100) + 10;
    int arr[20], i, *p;


    p = arr;

    for ( i = 0; i < ran ; i++)
    {
        p = p + i;
        p++;
    }

    for ( i = 0; i < ran; i++)
    {
        printf("number[%d]   =   %d\n", i, *p +  ((rand()% 100) + 10));

    }
    
    


    return 0;
}