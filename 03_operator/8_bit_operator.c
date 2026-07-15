#include <stdio.h>

int main (void) {


    int num = 0x11223344;

    printf("%d\n", num);
    printf("%08x\n", num);

    printf("%08x\n", num | 1);


    return 0;
}