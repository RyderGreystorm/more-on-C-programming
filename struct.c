#include <stdio.h>


    typedef struct  {
        char name[50];
        char password[12];
        int id;
        /* data */
    } User;
    

int main(){

User user1 = {"Fafa", "penmnoney", 12354653};
User user2 = {"Benjamin", "hero14", 98562022};

printf("%s\n", user1.name);
printf("%s\n", user1.password);
printf("%d\n", user1.id);

printf("%s\n", user2.name);
printf("%s\n", user2.password);
printf("%d\n", user2.id);




    return 0;
}