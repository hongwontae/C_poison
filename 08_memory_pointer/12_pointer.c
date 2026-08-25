#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    size_t length = 8;

    // 다중 포인터
    char name [] = "Hello-World";
    char * p = name;
    char ** pp = &p;
    char *** ppp = &pp;

    printf("name : %s\n", name);
    printf("p : %s\n", p);
    printf("pp : %s\n", *pp);
    printf("ppp : %s\n", **ppp);


    // name_set은 3개의 배열 형태를 갖추고 있고 하나의 요소마다 k,o,d의 시작 주소를 가지고 있습니다.
    // 그리고 각 요소는 문자열 배열입니다. -> 즉 2차원 배열
    // 2차원 배열에 접근할 떄 대괄호 연산자 두 번 -> 정확한 요소를 target 합니다.
    char * name_set [3] = {"kkkk", "oooo", "dnjsxoghd"};

    printf("name_set[0] : %s\n",  name_set[0]);
    printf("name_set[0] : %s\n",  name_set[0]+1);
    printf("name_set[1] : %s\n", name_set[1]);
    printf("name_set[2][0] : %c\n", name_set[2][0]);


    return 0;
}