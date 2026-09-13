#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    size_t length = 8;

    // 변수이름을 기준으로 *와 [] 중 뭐가 먼저 붙어 있는지 판단해야 합니다.
    // 연산자 우선 순위 [] > *
    // int *p [4] -> [] 먼저일 떄 p는 4개짜리 배열입니다. 그리고 각 요소가 포인터입니다.
    // int (*p) [4] -> *먼저일 떄 p는 포인터입니다. 그 포인터가 가리키는게 [4], 4개짜리 배열입니다. 즉, 포인터 하나는 4개짜리 배열을 가리킵니다.


    int num_set[3][4] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {100, 200, 300, 400}};
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