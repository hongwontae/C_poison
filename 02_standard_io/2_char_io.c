#include <stdio.h>

int main () {


    char name[90];

    // gets는 저장할 문자열의 첫 주소만 인자로 받아서 문자열을 채우는 메서드입니다. -> 위험합니다.
    // \n 문자가 들어오면 제거합니다.

    // fgets는 저장할 문자열 배열의 첫 주소와 사이즈와 입력 스트림을 인자로 받아서 문자열을 채우는 메서드입니다.
    // 이 떄 \n을 저장하고 뒤에 널문자를 넣습니다.

    // Hong Won Tae라는 이름을 입력 받음
    // 이 떄 엔터를 쳐야 입력이 들어감으로 \n이 뒤에 존재
    // name에는 Hong Won Tae\n\0이 들어감
    fgets(name, sizeof(name),stdin);
    
    

    // puts는 자동으로 \0을 만나면 \n을 마지막에 추가합니다.
    puts(name);
    


    return 0;
}