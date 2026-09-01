#include <stdio.h>

enum Color {
    RED,
    BLUE,
    WHITE
};


int main (void) {

    enum Color color_1;
    enum Color color_2;

    color_1 = RED;
    color_2 = 2;


    printf("color_1 -> %d\n", color_1);
    printf("color_2 -> %d\n", color_2);

    printf("RED : %d\n", RED);
    printf("Blue : %d\n", BLUE);
    printf("WHITE : %d\n", WHITE);



    return 0;
}