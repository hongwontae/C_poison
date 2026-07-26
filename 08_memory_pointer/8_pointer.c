#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {


    // szBuffer라는 식별자는 배열이고 char -> 1byte, 12개의 1byte 공간이 연속적으로 나열
    // Hello-World라는 단어는 data section이라는 가상 메모리에 존재
    // szBuffer라는 식별자 자체는 H의 주소값이 들어있다.
    char szBuffer [12] = "Hello-World";

    // pszData는 포인터 변수 -> 주소값을 담을 수 있음
    // 초기화는 NULL로
    char * pszData = NULL;

    // 런타임에 동적으로 HEAP 영역에 메모리 공간을 할당받습니다. -> 이 때 연속된 공간 1BYTE 12개입니다.
    pszData = (char *)malloc(sizeof(char) * 12);

    // 이 행동을 할 수 없는 이유는 pszData와 szBuffer가 둘 다 상수이기 떄문입니다.
    // 즉, 변할 수 없는 값, 둘 다 주소를 의미하기 때문입니다.
    // pszData = szBuffer;

    // 제대로 값을 넣기 위해서는 -> for or memcpy

    memcpy(pszData, szBuffer, sizeof(char)*12);

    for (int i = 0; i < 12; i++){
        printf("%c \n", pszData[i]);
    }



    return 0;
}