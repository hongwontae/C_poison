#include <stdio.h>
#include <string.h>


void my_strcpy (char * cp1, char * cp2) {
    
    strcpy(cp2, cp1);
}

void my_str_str (char *p1, char *p2, size_t length){

    for (int i = 0; i < length; ++i) {
        p2[i] = p1[i];
    }

}


int main (void) {

    char sz_buffer_1 [] = "Hello-World";
    char sz_buffer_2 [sizeof(sz_buffer_1)] = "";

    size_t sz_buffer_length_1 = sizeof(sz_buffer_1)/sizeof(sz_buffer_1[0]);
    // strlen은 null 문자 고려 x
    size_t sz_buffer_length_2 = strlen(sz_buffer_1)+1;
    size_t real_length = 0;

    if (sz_buffer_length_1 == sz_buffer_length_2){
        printf("Test 성공\n");
        real_length = sz_buffer_length_1;
    } else {
        printf("Test 실패\n");
        printf("length_1 : %zu, length_2 : %zu\n", sz_buffer_length_1, sz_buffer_length_2);
        return 0;
    }

    my_str_str(sz_buffer_1, sz_buffer_2, real_length);



    printf("sz_buffer_2 string : %s\n", sz_buffer_2);

    return 0;

}