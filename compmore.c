#include <stdio.h>

int main(void)
{

    int i, j;


    for (i =0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            if (i != j)
        
           { printf("%d", i);
            printf("%d", j); 
            if (i == 8 && j == 9)
                continue;
             printf(",");
            printf(" ");
            }
          

           

        }
        
    }
    printf("\n");
    return (0);
}