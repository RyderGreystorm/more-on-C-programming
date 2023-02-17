#include <stdio.h>



/**

 * main - This is the entry level

 * Return: always return zero (Success)

 */



int main(void)

{
char y[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

printf("Size of a char: %zu byte(s)\n",sizeof(char));

printf("Size of an int: %zu byte(s)\n",sizeof(int));

printf("Size of a long int: %zu byte(s)\n",sizeof(long int));

printf("Size of a long long int: %zu byte(s)\n",sizeof(long long int));

printf("Size of a float: %zu byte(s)\n",sizeof(float));
printf("%d", strlen(y));



return (0);

}

   