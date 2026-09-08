#include <stdio.h>


int main (void) {

    // getc는 어떤 입력 스트림에서 문자 하나를 읽는 함수입니다.
    // 인자로 스트림을 지정하고 문자 하나를 

    char ch = getc(stdin);

    putchar(ch);

    // fgetc도 동일하나 파일에 특화되었습니다.

    char ch_2 = fgetc(stdin);

    putchar(ch_2);

    return 0;
}