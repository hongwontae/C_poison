#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int a_list [] = {1,2,3,4};
    int *ptr = a_list;

    // a_list -> &a_list[0]
    printf("%p\n", a_list);
    printf("%p\n", ptr);

    // a_list[0] -> *(a_list+0);
    printf("%d\n", a_list[0]);
    // ptr[0] -> *(ptr + 0); -> ptr 자체는 첫 번쨰 주소값 + 0 -> 실제 0 번지 값
    printf("%d\n", ptr[0]);

    // sizeof(int) 확인
    // & (* (a_list + 0)); -> a_list 주소 &(*(주소)) -> &(메모리) -> 주소값
    // 하나의 요소가 4byte 차지 -> 주소값 딱 4 증가
    printf("%p\n", &a_list[0]);
    printf("%p\n", &a_list[1]);


    return 0;
}