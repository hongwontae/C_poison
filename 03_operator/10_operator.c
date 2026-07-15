#include <stdio.h>

int main (void) {


    int n_data = 10;

    printf("%zu\n", sizeof(n_data)); // 4byte
    printf("%zu\n", sizeof(++n_data)); 
     // 10 -> 여전히 10입니다. sizeof 안의 연산식은 계산하지 않고 자료형만 보고 byte size를 전달합니다.
    printf("%d\n", n_data);



    return 0;
}