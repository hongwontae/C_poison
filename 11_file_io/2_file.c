#include <stdio.h>

int main (void){

    FILE * fp = NULL;

    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        return 1;
    }

    char name [30] = {0};
    int age;

    fscanf(fp, "%s %d", name, &age);

    printf("name : %s, age : %d\n", name, age);
    

    return 0;
}