#include <stdio.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                if (i != j && j != k)
                {
                    printf("%d", i);
                    printf("%d", j);
                    printf("%d", k);
                    
                    if (i == 7 && j == 8 && k == 9)
                        continue;
                        printf(",");
                        printf(" ");
                }
            } 
        }
    }
    printf("\n");
    return (0);
}