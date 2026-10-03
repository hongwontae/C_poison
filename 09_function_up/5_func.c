#include <stdio.h>

void put_char (char * name_set) {

    if (*name_set == '\0') {
        return;
    }
    
    put_char(name_set+1);
    putchar(*name_set);
}


int main () {

    char name_set [] = "Hello-World";

    put_char(name_set);

    printf("\n");


    return 0;
}