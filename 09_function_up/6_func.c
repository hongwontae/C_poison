#include <stdio.h>
#include <string.h>


int main (void){


    printf("a  정수 -> %d\n", 'a');
    printf("가  정수 -> %s\n", "가");

    // 4 -> 3byte + 널문자
    printf("가 size -> %zu\n", sizeof("가"));


    return 0;
}