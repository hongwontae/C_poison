#include <stdio.h>

int main (void) {

    int num = 10;

    printf("num result = %d\n", num+3);
    printf("num result = %d\n", num+3-2);

    num = 10;

    // 둘 다 정수가 나옵니다.
    printf("/ result = %d\n", num/3);
    printf("\\ result = %d\n", num%3);

    printf("double value = %f\n", (double)num/3);


    return 0;
}