#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {


    char str_arr_1 [] = "Hello-World";
    char str_arr_2 [20];

    strcpy(str_arr_2, str_arr_1);

    printf("str_arr_2 : %s\n", str_arr_2);


    char str_arr_3 [] = "apple";
    char str_arr_4 [12] = "apple";

    // 즉, 문자열 자체를 비교합니다. -> 크기가 달라도 상관없음
    int num = strcmp(str_arr_3, str_arr_4);
    printf("같으면 0, str3이 크면 양수, str4가 크면 음수 -> %d\n", num);

    char test [] = {"Hello"};

    printf("test : %s\n", test);

    char str_arr_5 [] = "i am a boy";
    char *p = strstr(str_arr_5, "am");
    printf("am address : %p\n", p);
    printf("str_arr_5에서 am의 인덱스 : %ld\n", p - str_arr_5);
    


    return 0;
}