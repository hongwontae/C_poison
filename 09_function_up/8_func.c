#include <stdio.h>

void test (int * a) {

    *a = 20;

}

void test_2 (int ** a) {

    *a = NULL;

}

int main (void) {

    int num_1 = 10;
    int * ip = &num_1;

    test_2(&ip);

    printf("num_1 value : %d\n", num_1);
    printf("ip : %p\n", ip);

    return 0;
}