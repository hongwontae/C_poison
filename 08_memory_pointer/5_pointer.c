#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

    int *pList = NULL, *pNewList = NULL;

    int num_set = 40;

    memset(&num_set, 0, sizeof(int));
    printf("num_set : %d\n", num_set);

    // 12 byte
    pList = (int *)malloc(sizeof(int)*3);

    // memset -> 메모리 일정 영역을 특정 값으로 한꺼번에 채워주는 함수입니다.
    // memset(시작주소, 채울값, 크기)
    // 이 떄 memset은 바이트 단위로 채우기 떄문에 판단을 잘 해야 합니다.
    // int arr [3] / memset(arr, 0, sizeof(arr)) -> 01 01 01 01 | 01 01 01 01 | 01 01 01 01
    memset(pList, 0, sizeof(int)*3);

    // calloc -> 동적으로 메모리를 할당하면서 할당한 메모리를 전부 0으로 초기화하는 함수입니다.
    // calloc(개수, 하나의 크기)
    pNewList = (int *)calloc(5, sizeof(int));



    for(int i = 0; i < 3 ;i++){
        printf("%d\n", pList[i]);
    }

    printf("\n");

     for(int i = 0; i < 3 ;i++){
        printf("%d\n", pNewList[i]);
    }
    
    free(pList);

    return 0;
}