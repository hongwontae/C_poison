#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

    int a_list [] = {1,2,4};
    int b_list [] = {1,2,5};

    // memcmp -> 두 메모리 영역을 비교하는 함수입니다.
    // memcmp(매모리_주소_1, 메모리_주소_2, 비교할 바이트 수);
    // 이 떄 반환값으로 int형 데이터가 나오고 0이면 같음, 양수면 메1이 큼, 음수면 메2가 큰
    // 값을 비교하는게 아니라 같은 수준의 바이트를 비교합니다.
    int value = memcmp(a_list, b_list, sizeof(a_list));

    // 4-5 = -1
    printf("비교 값 : %d\n", value);


    int c_list [] = {10, 20, 30, 40, 50};
    int d_list [] = {10, 20, 30, 40, 30};

    size_t length = sizeof(c_list)/sizeof(c_list[0]);

    // 바이트로 비교하고 그 차이를 10진수로 알려주는 코드입니다. -> %d
    int value_2 = memcmp(c_list, d_list, sizeof(int) * length);

    printf("value : %d\n", value_2);



    return 0;
}