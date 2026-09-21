#include <stdio.h>
#include <stdlib.h>


int main (void) {

    // 해설
    // name_set은 char *를 값으로 가지고 있는 주소을 의미합니다. -> 첫 번쨰 요소의 주소, 근데 그 주소의 값은 char 8
    // 첫 번쨰 요소의 값은 H의 주소를 가지고 있습니다. h의 주소의 값은 h입니다. (ASCII로 이진수 n이 값)
    // name[0] -> name[1]의 로직은? -> char * -> 64bit에서 8byte -> 즉, A로 향합니다. -> 그 다음 요소로 가버림
    // name[0][0] -> name[0][1]의 로직은 -> char -> 1byte -> 즉 H에서 e로 향합니다.

    // *와 []이 선언에 존재할 떄 우선순위는 []이 먼저입니다.
    // 이 떄 name_set은 배열이다.
    // 그리고 각 요소의 값은 char * 이다.
    // 그리고 name_set은 포인터이고 요소의 첫 번쨰 주소를 가리킨다.
    char * name_set [] = {"Hello", "America", "Korea"};

    // 해당 주소는 Hello의 h의 주소를 가지고 있는 포인터의 주소를 의미합니다.
    printf("name_set       : %p\n", name_set);

    // 해당 주소는 h의 주소를 의미합니다.
    printf("name_set[0]    : %p\n", name_set[0]);
    printf("name_set[0][0] : %p\n", &name_set[0][0]);

    // 포인터 연산에서 몇 바이트 움직이는 것은 포인터가 가리키는 대상의 타입입니다. (메모리 상 값의 타입이 뭔지를 바라)
    printf("&name_set[0] : %p \n", name_set);
    printf("&name_set[1] : %p \n", &name_set[1]);


    // pp[0] -> pp[1] -> pp[0]의 타입은? char * -> 8byte이동
    // pp[0][0] -> pp[0][1] -> pp[0][0] 타입은? -> char -> 1byte 이동
    char ** pp = (char **) malloc (sizeof(char *) * 3);

    for (int i = 0; i < 3; i++) {
        pp[i] = malloc(sizeof(char) * 10);
    }

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 9; ++j) {
            pp[i][j] = 'h'+j;
        }
    }

    for (int i = 0; i < 3; i++) {
        pp[i][9] = '\0';
    }

    printf("pp[0] : %s\n", pp[0]);
    printf("pp[1] : %s\n", pp[1]);
    printf("pp[2] : %s\n", pp[2]);


    



    return 0;
}