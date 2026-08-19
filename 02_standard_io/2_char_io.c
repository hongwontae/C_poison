#include <stdio.h>

int main () {


    char name[90];

    // Hong Won Tae라는 이름을 입력 받음
    // 이 떄 엔터를 쳐야 입력이 들어감으로 \n이 뒤에 존재
    // name에는 Hong Won Tae\n\0이 들어감
    fgets(name, sizeof(name),stdin);

    // puts는 자동으로 \0을 만나면 \n을 마지막에 추가합니다.
    puts(name);


    return 0;
}