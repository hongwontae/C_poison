#include <stdio.h>

typedef enum State {
    RED,
    BLUE
} State;


int main (void) {

    State state_1 = RED;
    State state_2 = BLUE;

    printf("state_1 value : %d\n", state_1);
    printf("state_2 value : %d\n", state_2);

    return 0;
}