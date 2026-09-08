#include <stdio.h>

int main (void) {

    // char라는 타입은 문자처럼 사용하거나 숫자처럼 사용할 수 있는 정수형 타입입니다.
    // ram에 저장된 비트 패턴을 문자 코드로 해석할 수 있고 숫자로 해석할 수 도 있습니다. -> ASCII

    // 자료형은 메모리 크기 + 그 비트를 어떻게 다룰건지 결정합니다.
    // printf()에서 char의 지정형식자로  %d, %c를 사용할 수 있습니다.
    // 그리나 %p는 사용할 수 없습니다. -> 그 자료형이 그 비트를 %p로 다루지 않기 때문입니다.

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