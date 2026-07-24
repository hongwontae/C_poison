#include <stdio.h>

int main(void) {

    int nData = 10;
    int *p = &nData;

    printf("nData의 주소 : %p\n", &nData); // same
    printf("p의 값 : %p\n", p); // same


    return 0;
}