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

    // sprintf()는 형식에 맞춰 데이터를 문자열로 만들어서, 화면이 아니라 char 배열에 저장하는 함수입니다.
    // sprintf(문자열, 형식문자열, 데이터..);
    sprintf(kk, "이름 : %s, 나이 : %d", name_4, age);
    printf("kk : %s\n", kk);

    char str[10];
    char str10 [120];

    // snprintf(저장할 곳, 저장공간크기, 형식, 값);
    snprintf(str10, sizeof(str10), "Hello-World %d %d", 10, 20);
    snprintf(str, sizeof(str), "Hello World");

    printf("str : %s\n", str);
    printf("str10 : %s\n", str10);


    return  0;
}