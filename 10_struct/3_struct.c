#include <stdio.h>

typedef struct {
    char first_name [30];
    char second_name [30];
} Name;

typedef struct {

    Name name;
    int age;
    char area [30];

} Person;

int main (void) {

    Person s1 = {
        {"Hong", "WonTae"},
        20,
        "Korea"
    };

    printf("Your name is %s %s\n", s1.name.first_name, s1.name.second_name);
    printf("Your age is %d\n", s1.age);
    printf("Your area is %s\n", s1.area);

    return 0;


}