#include <stdio.h>

int main (void) {

    char name [] = "Hello-World";

    int num_selection [] = {10, 20, 30, 40};

    size_t name_t = sizeof(name);
    size_t num_selection_t = sizeof(num_selection);

    printf("name_t = %zu\n", name_t);
    printf("name_t = %zu\n", num_selection_t);

    printf("\n");

    printf("name address : %p\n", name);
    printf("num_selection address : %p\n", num_selection);
    
    printf("\n");

    printf("name address + 1 : %p\n", name+1);
    printf("num_selection address + 1 : %p\n", num_selection + 1);



    return 0;
}