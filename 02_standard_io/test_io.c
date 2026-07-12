#include <stdio.h>

int main (void) {

    // stdin buffer에 아무것도 x
    // read()를 사용해서 tty driver -> 터미널을 통해 입력 받아야 함 -> enter를 눌러야 read()에 전달
    // 그러면 입력 문자 + \n이 전달
    // ch1, ch2에 한 글자씩 하나씩만 전달
    char ch1 = getchar();
    char ch2 = getchar();


    // putchar는 매개변수에 글자 outbuffer에 순차적으로 저장
    // 버퍼 가득 차거나 fflush 호출 or 프로그램 종료시 flush 발생
    // enter가 없다면 줄 바꿈 x -> 순차적으로 나옴
    putchar(ch1);
    putchar(ch2);

    char ch3 [10] = {0};

    fgets(ch3, sizeof(ch3), stdin);
    printf("ch3 : %s\n", ch3);
    puts(ch3);


    return 0;
}