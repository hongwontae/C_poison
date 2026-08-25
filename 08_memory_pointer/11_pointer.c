#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    size_t length = 8;

    char * char_p = (char *) malloc(sizeof(char) * length);

    char_p[0] = 'H';
    char_p[1] = 'H';
    char_p[2] = 'H';
    char_p[3] = 'H';
    char_p[4] = '\0';

    printf("char_p data = %s\n", char_p);

    char * re_char_p = (char *) realloc(char_p, 16);

    printf("char_p pointer address    : %p\n", char_p);
    printf("re_char_p pointer address : %p\n", re_char_p);


    return 0;
}