#include <stdio.h>

int main () {


    char name[90];


    fgets(name, sizeof(name),stdin);

    puts(name);


    return 0;
}