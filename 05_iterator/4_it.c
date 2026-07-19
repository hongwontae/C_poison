#include <stdio.h>

int main (void) {

    // for
    int count = 0;

    for (int i = 1; i <=10; i++) {
        count += i;
    }

    printf("total : %d \n", count);



    return 0;
}