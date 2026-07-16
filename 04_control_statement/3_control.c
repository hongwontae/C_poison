#include <stdio.h>

int main (void) {

    int age = 0;
    int bus_fee = 1000;

    printf("나이를 입력해주세요\n");
    scanf("%d", &age);

    if (age <= 13) {
        if (age <= 3){
            // 영유아
            bus_fee = 0;
        } else {
            // 어린이
            bus_fee = bus_fee * 0.5;
        }
    } else {
        if (age <= 19){
            bus_fee = bus_fee * 0.75;
        }
    }

    printf("고객님의 나이는 %d이고 요금은 %d입니다.\n", age, bus_fee);


    return 0;
}