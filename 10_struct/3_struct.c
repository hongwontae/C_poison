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

// 구조체 내부에 구조체가 들어가는 선언이 가능합니다.
// 그리고 변수에서 정의할 떄 중괄호 내부의 중괄호를 사용해서 초기화할 수 있습니다.

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