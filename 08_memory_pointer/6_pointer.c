#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    char name [12] = "HELLOWORLD";
    char newName [12]  = {0};

    // 메모리의 내용을 다른 메모리 공간으로 복사하는 함수입니다.
    // memcpy(목적지_주소, 사본_주소, 복사할 바이트 수)
    memcpy(newName, name, 4);

    printf("newName : %s\n", newName);


    char name_2 [] =  "Alexander Isak";
    char * p;

    memcpy(p, name_2, sizeof(name_2));

    printf("p : %s\n", p);

    

    return 0;
}