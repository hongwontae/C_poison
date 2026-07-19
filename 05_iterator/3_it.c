#include <stdio.h>


int main (void) {

    // while
    int i = 1;
    int count = 0;

    while (i <= 10) {
        count += i;
        i++;
    }

    printf("count : %d\n", count);


    return 0;
}