#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    size_t length = 8;

    int num_set[3][4] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {100, 200, 300, 400}};

    // num_set의 첫 번쨰 요소의 주소를 받습니다.
    // 즉, p_num_set은 int 요소가 4개인 배열의 주소를 받는 변수입니다.
    // 포인터 연산은 p_num_set이 가리키는 대상의 크기 -> int[4]
    int (*p_num_set)[4] = num_set;

    
    // 두 주소가 일치합니다.
    printf("p_num_set[0] address  : %p\n", p_num_set);
    printf("num_set[0][0] address : %p\n", &num_set[0][0]);

    // 두 값이 일치합니다.
    printf("p_num_set[0][1] : %d\n", p_num_set[0][1]);
    printf("num_set[0][1]   : %d\n", num_set[0][1]);

    printf("p_num_set[1] address : %p\n", p_num_set+1);
    printf("p_num_set[2] address : %p\n", p_num_set+2);

    return 0;
}