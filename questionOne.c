#include <stdio.h>


int main(){
    int num;
    printf("Please enter a number above 100: ");
    scanf("%d", &num);
    

    while (num < 100){
    printf("Please enter a number above 100: ");
    scanf("%d", &num);

    }
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0){
            printf("%d\n", i);
        
    }
    }

    
    
    return 0;
}