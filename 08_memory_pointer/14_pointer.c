#include <stdio.h>

int TestFunc (void) {

    static int n_data = 10;
    ++n_data;
    return n_data;
        
}

int main (void) {

    printf("n_data case_1 : %d\n", TestFunc());
    printf("n_data case_1 : %d\n", TestFunc());
    printf("n_data case_1 : %d\n", TestFunc());

    return 0;
}