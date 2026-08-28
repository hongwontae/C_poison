#include <stdio.h>

typedef union IP_ADDR {

    int n_address;
    short aw_data [2];
    unsigned char addr [4];

} IP_ADDR;


int main (void) {

    // 0 초기화
    IP_ADDR data = {0};

    printf("data.n_address : %d\n", data.n_address);

    data.n_address = 0x41424344;
    printf("n_address : %x\n", data.n_address);

    // 형식지정자 %c는 char 바이트에 저장된 이진수 -> 10진수로 바꾸고 -> ascii로 바꾸는 과정입니다.
    printf("%c%c%c%c\n", data.addr[0], data.addr[1], data.addr[2], data.addr[3]);

    printf("%x\n", data.addr[0]);
    printf("%x\n", data.addr[1]);
    printf("%x\n", data.addr[2]);
    printf("%x\n", data.addr[3]);

    return 0;
}