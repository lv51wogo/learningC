//
// Created by Lara von Kries on 2019-03-13.
//
//pointer and stuff
#include <stdio.h>


//struct

typedef struct{
    char * name;
    int age;
} person ;




int main() {

    //pointer
    int n = 10;
    int * pointer_to_n = &n;

    *pointer_to_n += 1;

    if (pointer_to_n != &n)
        return 1;
    if (*pointer_to_n != 11)
        return 1;

    printf("Done! \n");

    //struct

    person john;

    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.\n", john.name, john.age);

    return 0;
}