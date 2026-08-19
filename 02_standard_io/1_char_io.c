#include <stdio.h>

int main () {

    // 실행 시 입력 버퍼에는 아무 것도 없음 -> getchar()는 read를 실행 
    // read를 통해 터미널에서 입력을 기다리는 형태 
    // 2입력 -> 이 떄 Caninocal 모드라 enter 전에는 전송 x -> enter 클릭
    // 2\n이 입력버퍼에 전달되고 ch = '2', ch2 = '\n' 전달 
    // putchar는 ch와 ch2를 인자로 받았기에 이를 출력 버퍼에 전달
    // 2\n을 한꺼번에 출력
    char ch = getchar();
    char ch2 = getchar();

    putchar(ch);
    putchar(ch2);


    return 0;
};