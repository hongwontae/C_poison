#include <stdio.h>

int main () {

    // 만약 age나 name을 초기화하지 않으면 해당 메모리에는 쓰레기 값이 들어갈 수 있습니다.
    // 즉, int age; char name [30] -> 이렇게 정의만 되어 있다면 메모리 공간 확보 but 그 공간에 다른 값이 있을 수 있음
    int age = 0;
    char name [30];

    printf("터미널 프로그램을 시작합니다. 나이를 입력해주세요\n");
    scanf("%d", &age);

    printf("이름을 입력해주세요\n");
    scanf("%s", name);

    printf("당신의 이름은 %s, 나이는 %d입니다.\n", name, age);

    return 0;
}