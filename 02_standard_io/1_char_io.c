#include <stdio.h>

int main () {

    // getchar는 입력 버퍼의 하나의 문자만 받아서 전달합니다. -> enter 전까지 터미널에 데이터 존재 -> enter 이후에 입력 버퍼에 들어감 -> 거기서 kkk라면 kkk\n이 들어감
    // 실행 시 입력 버퍼에는 아무 것도 없음 -> getchar()는 read를 실행 
    // read를 통해 터미널에서 입력을 기다리는 형태 
    // 2입력 -> 이 떄 Caninocal 모드라 enter 전에는 전송 x -> enter 클릭
    // 2\n이 입력버퍼에 전달되고 ch = '2', ch2 = '\n' 전달 
    // putchar는 단 하나의 문자만 출력하는 메서드입니다.
    // putchar는 ch와 ch2를 인자로 받았기에 이를 출력 버퍼에 전달
    // 2\n을 한꺼번에 출력
    char ch = getchar();
    char ch2 = getchar();
    
    putchar(ch);
    putchar(ch2);


    return 0;
};