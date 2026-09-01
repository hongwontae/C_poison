#include <stdio.h>

int main (void) {

    FILE * fp = NULL;

    fp = fopen("test.txt", "a");

    if (fp == NULL ){
        printf("파일에 대한 비정상적 접근");
        return 0;
    }

    fprintf(fp, "Hello-World\n");
    fprintf(fp, "Age : %d\n", 12);

    fclose(fp);


    return 0;
}