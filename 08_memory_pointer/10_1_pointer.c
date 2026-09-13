#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (void) {

    // strstr은 문자열 찾기
    // strcmp는 문자열 비교하기
    // strcpy는 문자열 복사하기


    char name_1 [] = "Hong-Won-Tae";
    char name_2 [20];

    strcpy(name_2, name_1);

    printf("name_2 string : %s\n", name_2);


    char name_3 [] = "KKKKK1";
    char name_4 [] = "kkkkk2";

    int diff = strcmp(name_3, name_4);

    printf("diff = %d\n", diff);


    char name_5 [] = "Good Girl";
    char search [] = "Gi";

    char * p = strstr(name_5, search);
    printf("찾을 문자열 주소 : %p\n", p);
    printf("찾을 문자열 인덱스 : %ld", &name_5[sizeof(name_5)] - p);
    printf("적합하게 찾았는지 확인 %c: ", name_5[&name_5[sizeof(name_5)] - p]);


    return 0;
}