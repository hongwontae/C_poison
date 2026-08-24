#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    size_t length = 5;

    char * char_pointer_1 = (char *) malloc(sizeof(char) * length);
    char * char_pointer_2 = (char *) malloc(sizeof(char) * length);

    char st = 'H';

    for (int i = 0; i < length; ++i) {
        char_pointer_1[i] = st;
        st+=1;
    }

    printf("char_pointer value : %s\n", char_pointer_1);

    memcpy(char_pointer_2, char_pointer_1, length);

    for (int i = 0; i < length; ++i) {
        printf("char_pointer_2[%d] : %c\n", i, char_pointer_2[i]);
    }


    // diff = 0 -> 차이 없음 / 제대로 복사완료
    int diff = memcmp(char_pointer_1, char_pointer_2, length);
    printf("diff : %d\n", diff);


    free(char_pointer_1);
    free(char_pointer_2);

}