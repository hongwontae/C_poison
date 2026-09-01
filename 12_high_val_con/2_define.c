#define MAX 10
#include <stdio.h>


int main (void) {


    char name [MAX] = {0};

    for (int i = 0; i < MAX; ++i) {
        name[i] = 'H'+i;
    }


    printf("name : %s\n", name);



    return 0;
}