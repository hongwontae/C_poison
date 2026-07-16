#include <stdio.h>

int main (void) {

    int bus_fee = 1000;
    int age = 0;

    printf("나이를 입력해주세요.\n");
    scanf("%d", &age);

    if (age >= 20) {
        age = 20;
    }

    if (age < 20) {
        bus_fee = bus_fee * 0.75;
    }

    printf("나이 %d, 최종요금 : %d\n", age, bus_fee);



    return 0;
}