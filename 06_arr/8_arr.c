#include <stdio.h>

int main (void) {

    char name [] = "Hello-World";
    printf("my name is %s\n", name);

    // 결과가 ?? : heHello-World 이렇게 나왔습니다.
    // 널문자를 읽을 때까지 찾으려고 하는데 우연히 name 변수가 name2랑 이어져 있었기에 생긴 일입니다.
    char name2 [] = {'h', 'e'};
    printf("?? : %s\n", name2);


    return 0;
}