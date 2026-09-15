#include <stdio.h>
#include <string.h>

int main()
{
    // typedef는 이미 존재하는 자료형에 내가 원하는 별명을 붙이는 것입니다.
    // typedef int Number; -> Number a = 10; -> a는 int형이 됩니다.
    // struct에서 많이 사용됩니다.

    // struct Person {...}; -> Person이라는 구조체를 정의
    // struct Person p1; -> p1이라는 Person 구조체의 변수를 선언
    
    // typedef + 구조체
    // typedef struct Person {
    //    int age;
    //    char name[20];
    //   } Person;
    // 구조체를 정의하고 struct Person에 Person이라는 별명을 부여한 것입니다.
    // 구조체 변수를 선언할 떄 Peson p1; -> 축약할 수 있습니다.

    // 이름 없는 구조체
    //     typedef struct Person {
    //     int age;
    //     char name[20];
    // } Person;
    // 이렇게 사용자체는 가능하나 선언할 수 있습니다.
    
    // 이름 없는 구조체 + typedef
    //     typedef struct {
    //     int age;
    //     char name[20];
    // } Person;
    //  이름 없는 구조체에 Person이라는 별명을 붙인것입니다.


    // struct Person
    // {
    //     int age : 10;
    //     char name_1[20];
    //     char name_2[30];
    // };

    struct Person {
        char name [20];
        int age;
    };

    struct Person p1;
    struct Person p2;

    size_t length = sizeof(p1.name) / sizeof(p1.name[0]);

    printf("length : %zu\n", length);

    for (int i = 0; i < length-1; ++i) {
        p1.name[i] = 'h' + i;
    }

    p1.name[length-1] = '\0';

    printf("p1.name = %s\n", p1.name);

    strcpy(p2.name, p1.name);

    p1.age = 10;
    p2.age = 40;

    printf("p1 %s, %d \n", p1.name, p1.age);
    printf("p2 %s, %d\n", p2.name, p2.age);





    return 0;
}