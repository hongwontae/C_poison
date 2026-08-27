#include <stdio.h>

typedef struct Person {

    char name [30];
    int age;
    struct Person* pNext;

} Person;


int main (void) {


    Person s1 = {"Lee", 20, NULL};
    Person s2 = {"Kim", 30, NULL};

    s1.pNext = &s2;

    printf("s1 name : %s, s1 age : %d\n", s1.name, s1.age);
    printf("s2 name : %s, s2 age : %d\n", s1.pNext->name, s1.pNext->age);


    return 0;
}