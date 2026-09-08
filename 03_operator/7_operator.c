#include <stdio.h>

int main () {

    // 0 ~ 255 -> 255일 때는 8bit에 1로만 채워져 있습니다.
    // 256이 되는 순간 -> 0 입니다. 
    // 257이 되는 순간 -> 1입니다.
    // 그 이유는 모든 비트가 1일 떄 1를 더하면 비트 수를 유지할 떄 0이 됩니다. -> 2진수 더하기 계산
    // 그리고 또 1을 더하면? -> 1이 됩니다.

    unsigned char ch = 255;

    printf("%d\n", ch);
    printf("%d\n", (unsigned char)(ch + 1));
    printf("%d\n", (unsigned char)(ch + 2));

    return 0;
}