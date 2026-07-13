#include <stdio.h>

int main (void) {

    char one = 'A';
    int num = 10;
    double do_data = 1.0;
    
    printf("char is %c\n", one);
    printf("char is %c\n", one+1);
    printf("char is %c\n", one+2);
    // 사이즈는? -> 4 즉, 4byte이고 임시결과 타입은 int입니다.
    printf("char? or int? -> %zu\n", sizeof(one+1));


    printf("num/double -> %f\n", num/do_data);
    // 사이즈는? -> 8 즉, 8byte이고 임시결과 타입은 double입니다.
    printf("num/double -> %zu\n", sizeof(num/do_data));

    


    return 0;
}