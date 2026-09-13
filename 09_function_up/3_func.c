#include <stdio.h>
#include <stdlib.h>

// 이 코드 흐름은 가능합니다.
// 함수를 호출하면 HEAP 영역에서 공간을 만들고 그 주소를 전달해주고 main 함수에서 사용

char * char_p_func (size_t length) {

    char * mcp = (char *)malloc(sizeof(char) * length);
    printf("address : %p\n",mcp);

    return mcp;

}

int main (void) {

    size_t length = 10;

    char * caller_mcp = char_p_func(length);
    
    printf("address : %p\n",caller_mcp);

    free(caller_mcp);

    return 0;

}