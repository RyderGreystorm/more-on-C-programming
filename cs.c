#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char str[20];

    printf("Please enter some words:\n");
    fgets(str,20, stdin);
    str[strlen(str) - 1] = '\0';

    while (str[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
    

}