#include <stdio.h>
#include <string.h>

int main (void){

char str[] = "hello world C";
char * saveper = NULL;


// strtok는 문자열을 특정 구분자로 잘라서 하나씩 가져오는 함수입니다.
// strtok는 내부적으로 지금 어디까지 읽었는지를 기억합니다.
// strtok는 문자열, 구분자를 받습니다.
// 첫 호출 이후 strtok(NULL, 구분자)를 통해 다음 토큰을 알아서 찾습니다.

// strtok의 세 번쨰 인자는 포인터의 주소입니다. -> 이중 포인터 역할
// 이 때 saveper 자체를 변경하기 위해서 이중 포인터로 전달합니다.
// 함수로 변수를 전달했을 떄 내부의 값을 복사해서 전달합니다. -> 우리가 하고 싶은건 saveper 포인터 변수 자체를 지속적으로 변경하는 것
char *token = strtok_r(str, " ", &saveper);


while (token != NULL) {
    printf("%s\n", token);
    printf("%s\n", saveper);
    token = strtok_r(NULL, " ", &saveper);
}

    return 0;
}