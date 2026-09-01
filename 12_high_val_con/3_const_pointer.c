#include <stdio.h>

int main (void) {

    int num = 10;

    const int * p = &num;

    // 컴파일 타임에 에러 발생
    // *p = 20;

    // 접근 자체는 가능 -> read는 가능
    printf("num : %d\n", *p);


    int * const pp = &num;

    int bb = 20;

    *pp = 330;

    // 포인터 주소 자체 변경은 불가능합니다.
    // pp = &bb;

    printf("pp value : %d\n", *pp);

    return 0;
}