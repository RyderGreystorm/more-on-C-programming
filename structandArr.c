#include <stdio.h>

    typedef struct 
    {
        char name[20];
        float gpa;
    } Students;
    

int main(){

    Students std1 = {"Fafa", 4.0};
    Students std2 = {"Ben", 3.5};
    Students std3 = {"Justice", 3.8};
    Students std4 = {"Barded", 2.8};
    Students std5 = {"Kuma", 3.2};


    Students students [] = {std1, std2, std3, std4, std5};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%s\t %.2f \n", students[i].name, students[i].gpa);
    }
    
    


    return 0;
}