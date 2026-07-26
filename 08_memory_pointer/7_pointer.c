#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

    int a_list [] = {1,2,4};
    int b_list [] = {1,2,5};

    int value = memcmp(a_list, b_list, sizeof(a_list));

    // 4-5 = -1
    printf("비교 값 : %d\n", value);

    return 0;
}