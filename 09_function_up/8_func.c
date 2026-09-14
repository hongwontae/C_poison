#include <stdio.h>

void test (int * a) {

    *a = 20;

}

void test_2 (int ** a) {

    *a = NULL;

}

// 표현식말고 정의/매개변수 정의에서 *는 포인터임을 알리는 것입니다.
// 이 떄 test를 호출할 떄는 a는 주소값을 받아야 합니다. -> 이중 포인터를 받지 않습니다.
// 그리고 포인터을 역참조해서 20으로 변경하고 함수 종료 -> a를 호출했을 떄 값 변경 완료

// test_2를 호출하면 이중 포인터를 줘야합니다. -> 변수 -> 주소 -> 주소
// 이 때 역참조를 한 번만 하면 ip 주소 값을 NULL로 변경합니다.
// a에 역할을 주지 않습니다.

int main (void) {

    int num_1 = 10;
    int * ip = &num_1;

    test_2(&ip);

    printf("num_1 value : %d\n", num_1);
    printf("ip : %p\n", ip);

    return 0;
}