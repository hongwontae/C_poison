#include <stdio.h>
#include <stdlib.h>


int main (void) {

    char name [3] [10] = {
        "hong",
        "won",
        "tae"
    };

    printf("name[0] : %p\n", name[0]);
    printf("*name[0] : %c\n", *name[0]);
    printf("*name[1] : %c\n", *name[1]);


    return 0;
}