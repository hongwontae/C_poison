#include <stdio.h>

int main (void) {

    int count = 0;

    // 10
    char name [] = "Hello-World";
    char *p_name = name;

    while(*p_name != '\0'){
        p_name++;
    printf("p_name pointer  : %p\n", p_name);

        count++;
    }

    printf("name pointer    : %p\n", name);
    printf("p_name pointer  : %p\n", p_name);
    printf("count : %d\n", count);
    printf("차이 : %ld\n", p_name - name);

}