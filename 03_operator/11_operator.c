#include <stdio.h>

int main (void) {

    int a = 0, b =0;

    printf("두 개의 정수를 입력해주세요\n");
    scanf("%d %d", &a, &b);

    printf("a == b -> %d\n", a == b);
    printf("a != b -> %d\n", a != b);
    printf("a > b -> %d\n", a > b);
    printf("a < b -> %d\n", a < b);
    printf(" a <= b -> %d\n", a <= b);
    printf("a >= b -> %d\n", a >= b);

    printf("논리식을 수행할게요\n");
    int d = 20, e = 20, f = 40;
    printf("d == e || e == f -> %d\n", d == e || e == f);
    printf("d == e && e == f -> %d\n", d == e && e == f);
    printf("!(d==e) -> %d\n", !(d == e));





    return 0;
}