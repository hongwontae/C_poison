#include <stdio.h>

int main (void) {

    FILE *fp;

    fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("해당 파일이 존재하지 않습니다.\n");
        return 0;
    }

    fprintf(fp, "Hello-World\n");
    fprintf(fp, "Age : 30\n");

    char name_1 [50];
    char name_2 [50];

    fgets(name_1, sizeof(name_1), fp);
    fgets(name_2, sizeof(name_2), fp);

    printf("name_1 : %s\n", name_1);
    printf("name_2 : %s\n", name_2);

    fclose(fp);

    return 0;
}