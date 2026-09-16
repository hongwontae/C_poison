#include <stdio.h>

int add (int a, int b) {

    return a+b;
}


int main () {

    int (* p_add) (int, int) = add;

    printf("add value -> %d\n", add(10, 20));
    printf("p_add value -> %d\n", p_add(10, 20));
    printf("add address -> %p\n", add);
    printf("p_add address -> %p\n", p_add);

    return 0;
}