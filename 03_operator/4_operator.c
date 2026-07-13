#include <stdio.h>

int main (void) {

    int num = 0;
    int num2 = 0;
    int num3 = 0;

    printf("시:분:초로 바꿔드립니다. 초를 입력해주세요\n");
    scanf("%d", &num);
    printf("받은 초는 %d입니다.\n", num);

    // 초 -> 분으로 바꿉니다.
    num2 = num/60;
    printf("초 -> %d\n 분", num2);
    
    // 분 -> 시로 바꿉니다.


    return 0;
}