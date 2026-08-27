#include <stdio.h>
#include <string.h>


int main (void) {

    char name_1 [128] = "Hong";
    char name_2 [] = "Won";
    char name_3 [] = "Tae";

    strcat(name_1, name_2);
    strcat(name_1, name_3);

    printf("full name : %s\n", name_1);

    char kk [100] = "JJJJ";
    int age = 20;
    char name_4 [] = "Hong";

    sprintf(kk, "이름 : %s, 나이 : %d", name_4, age);
    printf("kk : %s\n", kk);

    char str[10];

    snprintf(str, sizeof(str), "Hello World");

    printf("str : %s\n", str);



    return  0;
}