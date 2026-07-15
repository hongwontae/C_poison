#include <stdio.h>

int main (void) {

    int num = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;

    printf("시:분:초로 바꿔드립니다. 초를 입력해주세요\n");
    scanf("%d", &num);
    printf("받은 초는 %d입니다.\n", num);

    // 초를 시간으로 바꾸면 ? 
    num2 = num/3600;
    printf("시간은 : %d\n", num2);

    // 초를 시간으로 바꾼 뒤 남은 초는?
    printf("남은 초 : %d\n", num%3600);

    // 남은 초를 분으로 바꾸면 ?
    num3 = (num%3600)/60;
    printf("분은 : %d\n", num3);

    // 초를 시간으로 바꾸고 분으로 바꾸고 남은 초는?
    num4 = (num%3600)%60;
    printf("남은 초 :%d\n", (num%3600)%60);

    printf("초는 : %d\n", num4);

    printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", num, num2, num3, num4);



    return 0;
}