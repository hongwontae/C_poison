#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // malloc과 free()를 사용하면 간단한 예제
    // malloc은 힙 영역을 메모리 공간을 할당해주는 함수입니다.
    // 이 떄 인수로 byte 수를 받습니다.
    // 그리고 배열 연산자를 사용하면 그 주소의 값으로 접근합니다.


    int * int_p = (int *) malloc(sizeof(int) * 4);

    int_p[0] = 10;
    int_p[1] = 20;
    int_p[2] = 30;
    int_p[3] = 0x1122;

    
    for (int i = 0; i < 4; i++) {
        printf("int_p[%d] = %d\n", i, int_p[i]);
    }   

    free(int_p);


    return 0;
}
