#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    size_t length_1 = 4;

    int * num_pointer_1 = (int * )calloc(5, sizeof(int));

    printf("num_pointer = %p\n", num_pointer_1);

    num_pointer_1[0] = 10;

    printf("num_pointer[0] value : %d\n", num_pointer_1[0]);
    printf("num_pointer[0] value : %d\n", *num_pointer_1);

    num_pointer_1[1] = 30;

    printf("num_pointer 2 : %p\n", num_pointer_1+1);
    printf("num_pointer[1] value : %d\n", num_pointer_1[1]);
    printf("num_pointer[1] value : %d\n", *(num_pointer_1+1));

    // memset은 n -> 1바이트마다 0x0n을 저장한다.
    // int(4byte)로 읽으면 0x01010101이 된다.
    // 1010101 -> 앞에 0이 생략된것 = 01010101
    memset(num_pointer_1, 1, length_1);
    printf("num_pointer[0] value : %d\n", *num_pointer_1);
    printf("num_pointer value 16 %x\n", *num_pointer_1);

    // 2020202
    memset(num_pointer_1, 2, length_1);
    printf("num_pointer[0] value : %d\n", *num_pointer_1);
    printf("num_pointer value 16 %x\n", *num_pointer_1);

    


    free(num_pointer_1);


    return 0;
}