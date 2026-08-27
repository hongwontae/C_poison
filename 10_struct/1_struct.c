#include <stdio.h>
#include <string.h>

int main()
{

    // struct Person
    // {
    //     int age : 10;
    //     char name_1[20];
    //     char name_2[30];
    // };

    typedef struct
    {
        int age : 10;
        char name_1[20];
        char name_2[30];
    } Person2;

    // struct Person p1;
    // struct Person p2;

    Person2 p1;
    Person2 p2;

    p1.age = 10;
    p2.age = 20;

    strcpy(p1.name_1, "Hello-World-1");
    strcpy(p2.name_1, "Hello-World-2");
    strcpy(p1.name_2, "Hong");
    strcpy(p2.name_2, "Won");

    printf("이름은 %s이고 별명은 %s이고 나이는 %d입니다.\n", p1.name_1, p1.name_2, p1.age);
    printf("이름은 %s이고 별명은 %s이고 나이는 %d입니다.\n", p2.name_1, p2.name_2, p2.age);

    return 0;
}