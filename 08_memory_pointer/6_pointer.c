#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    char name [12] = "HELLOWORLD";
    char newName [12]  = {0};

    memcpy(newName, name, 4);

    printf("newName : %s\n", newName);


    return 0;
}