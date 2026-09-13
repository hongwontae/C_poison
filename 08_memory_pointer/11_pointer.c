#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    size_t length = 8;

    char * p = (char *) malloc (length);
    printf("char p address = %p\n", p);

    for (int i = 0; i < length; i++) {
        p[i] = 'H'+i;
    }

    p[length] = '\0';

    // realloc은 이미 동적으로 할당된 메모리의 크기를 변경하는 함수입니다.
    // realloc(기존_메모리_주소, 새로운_크기);
    p = realloc(p, 10);
    printf("realloc p address = %p\n", p);
    
    p[10] = '\0';

    for (int i = 0; i < 10; i++) {
        printf("p : %c \n", p[i]);
    }



    free(p);

    return 0;
}