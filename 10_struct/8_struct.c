#include <stdio.h>

// #pragma pack(push, 1)
typedef struct Person {

    char name [17];
    int age;

} Person;
// #pragma pack(pop)


int main (void) {


    Person p1;

    printf("Person size -> %zu\n", sizeof(p1));

    printf("name address -> %p\n", p1.name);
    printf("age address -> %p\n", &p1.age);


    return 0;
}