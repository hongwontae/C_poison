#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (void) {

    // strstr은 문자열 찾기
    // strcmp는 문자열 비교하기
    // strcpy는 문자열 복사하기
    // strlen은 문자열에서 널 문자 나올 떄까지 count -> 인덱스가 됩니다. -> 길이 자체가 아닙니다.


    char name_1 [] = "Hong-Won-Tae";
    char name_2 [20];

    strcpy(name_2, name_1);

    printf("name_2 string : %s\n", name_2);


    char name_3 [] = "KKKKK1";
    char name_4 [] = "kkkkk2";

    // 이 떄 동일한 결과를 얻을 수 있습니다.
    // 다만 strcmp는 가장 먼저 나온 널 문자까지 비교하기에 size byte 수가 필요 없습니다.
    int diff = memcmp(name_3, name_4, sizeof(name_3));
    // int diff = strcmp(name_3, name_4);

    printf("diff = %d\n", diff);


    char name_5 [] = "Good Girl";
    char search [] = "Gi";

    // strstr은 원하는 문자가 나오는 첫 번쨰 요소의 주소를 반환합니다.
    // char 배열은 1byte 씩 쭉 나열된 형태입니다.
    // 이 떄 주소도 1byte마다 1byte씩 주소값이 증가하여 나타납니다.
    // 이 속성을 사용해서 찾은 문자열 주소 - 첫 번째 요소 문자열 주소 -> 인덱스
    char * p = strstr(name_5, search);
    printf("찾을 문자열 주소 : %p\n", p);
    printf("찾을 문자열 인덱스 : %ld\n", p-name_5);
    printf("적합하게 찾았는지 확인 %c\n: ", name_5[p-name_5]);


    return 0;
}