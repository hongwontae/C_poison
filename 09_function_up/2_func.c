#include <stdio.h>


// Stack에 존재하는 변수의 주소값을 받아서 역참조해서 접근하면 안됩니다.

int * test_func_1 (void) {
    int n_data = 10;
    return &n_data;
}


int main (void) {

    int * p = NULL;

    p = test_func_1();

    printf("p value : %d\n", *p);

    return 0;
}