#include <stdio.h>
#include <stdlib.h>


int main (void) {

    // 이렇게 알아야 함
    size_t length = 4; 

    // 4byte 4개 공간 -> 16byte
    int * int_p = (int * )malloc(sizeof(int) * length);

    // int_p -> 포인터 변수, 주소 값 -> 8byte / int_p[0] -> 값 하나 -> 4byte
    // 정확한 계산이 아님
    size_t int_p_length = sizeof(int_p) / sizeof(int_p[0]);

    printf("%zu\n", int_p_length);

    // 4/4
    size_t int_p_right_length = sizeof(*int_p) / sizeof(int_p[0]);

    printf("%zu\n", int_p_right_length);

    printf("int_p : %p\n", int_p);
    // 정확히 4byte 이동한 결과 주소가 나옵니다.
    printf("int_p + 1 : %p\n", int_p+1);

    printf("\n");



    printf("int_p : %d\n", *int_p);
    printf("int_p + 1 : %d\n", *(int_p+1));

    free(int_p);


    return 0;
}