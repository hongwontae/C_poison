#include <stdio.h>
#include <stdlib.h>

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