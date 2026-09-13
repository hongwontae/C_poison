#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {


    char str_arr_1 [] = "Hello-World";
    char str_arr_2 [20];

    // 문자열을 다른 문자열 배열로 복사하는 함수입니다.
    // strcpy(목적지_주소, 원본_주소);
    // 문자열의 끝을 만날 때까지 복사합니다.
    strcpy(str_arr_2, str_arr_1);

    printf("str_arr_2 : %s\n", str_arr_2);


    char str_arr_3 [] = "apple";
    char str_arr_4 [12] = "apple";

    // 두 문자열을 비교하는 함수입니다.
    // strcmp(문자열_주소_1, 문자열_주소_2)
    // 같은 수준에 있는 문자열의 문자끼리 비교해서 같지 않으면 그 차이를 반환합니다.
    int num = strcmp(str_arr_3, str_arr_4);
    printf("같으면 0, str3이 크면 양수, str4가 크면 음수 -> %d\n", num);

    char test [] = {"Hello"};

    printf("test : %s\n", test);


    char str_arr_5 [] = "i am a boy";
    // 문자열 안에서 특정 문자열을 찾는 함수입니다.
    // strstr(전체_문자열_주소, 찾을문자열_주소)
    // str_arr_t에서 am이 시작된 첫 주소를 반환합니다.
    char *p = strstr(str_arr_5, "am");
    printf("am address : %p\n", p);
    printf("str_arr_5에서 am의 인덱스 : %ld\n", p - str_arr_5);
    


    return 0;
}