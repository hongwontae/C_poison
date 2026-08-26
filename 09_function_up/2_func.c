#include <stdio.h>


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