#include <stdio.h>

int main(){

    int number[10], x, *pn;

    pn = number;

    for(x = 0; x < sizeof(number)/sizeof(number[0]); x++)
    {
        pn = pn + x;
        pn+=1;
    }

    for(x = 0; x < sizeof(number)/sizeof(number[0]); x++)
    {
        printf("number[%d]   =   %d\n", x, *pn + x);
    }
    return 0;
}