#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void) {

    srand(time(NULL));

    int num_1 = rand();
    int num_2 = rand();
    int num_3 = rand();

    printf("num_1 : %d\n", num_1);
    printf("num_2 : %d\n", num_2);
    printf("num_3 : %d\n", num_3);
    


    return 0;

}