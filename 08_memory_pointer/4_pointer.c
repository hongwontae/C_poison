#include <stdio.h>
#include <stdlib.h>

int main (void) {

    // 문자열 -> 초기화를 중괄호로 실행
    char szBuffer []  = {"Hello"};

    // 문자열 상수 -> char [] -> data section에 존재 -> H 주소를 pszBuffer에 넣습니다.
    char *pszBuffer = "Hello";

    // pszData 주소에 null -> \0 넣습니다.
    char *pszData = NULL;
    printf("pszData : %s\n", pszData);



    // 런타임에 Heap 영역에 6byte 연속된 공간을 가져옵니다.
    // 그리고 반환값은 첫 번째 공간의 주소입니다. -> 그 주소는 char 주소를 담을 수 있는 8byte 공간입니다.
    // 8byte인 이유는 주소 자체는 8byte가 필요하기 떄문입니다

    pszData = (char *)malloc(sizeof(char)*6);

    pszData[0] = 'H';
    pszData[1] = 'E';
    pszData[2] = 'L';
    pszData[3] = 'L';
    pszData[4] = 'O';
    pszData[5] = '\0';


    printf("szBuffer : %s\n", szBuffer);
    printf("pszBuffer : %s\n", pszBuffer);
    printf("pszData : %s\n", pszData);


    return 0;
}