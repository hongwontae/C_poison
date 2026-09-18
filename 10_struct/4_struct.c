#include <stdio.h>

typedef struct Person {

    char name [30];
    int age;
    struct Person* pNext;

} Person;

// 구조체 내부에 자신의 주소를 사용하고 싶다면 typedef + 이름 없는 구조체 형식으로 지정하면 안됩니다.
// 해당 코드는 간단하게 연결리스트를 표현한 것입니다.

// -> 연산자는 구조체 주소를 저장하고 있는 포인터 변수가 사용할 수 있습니다.
// 이 떄 *를 사용한 효과와 동일합니다. -> 역참조입니다.

int main (void) {


    Person s1 = {"Lee", 20, NULL};
    Person s2 = {"Kim", 30, NULL};

    s1.pNext = &s2;

    printf("s1 name : %s, s1 age : %d\n", s1.name, s1.age);
    printf("s2 name : %s, s2 age : %d\n", s1.pNext->name, s1.pNext->age);


    return 0;
}