#include <stdio.h>

void test () {

    char name [8] = {0};
    int num = 0x11223344;

    scanf("%s",name);

    printf("name : %s\n", name);
    printf("num : %x\n", num);

}

int main (void) {

    test();


    return 0;
}