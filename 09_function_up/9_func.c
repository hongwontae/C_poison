#include <stdio.h>
#include <string.h>


int main (void ) {

    
    char my_name [] = "HongWonTae";

    // name_p에는 H의 주소가 들어가 있습니다.
    char * name_p = my_name;


    // strpbrk -> 문자열에서 특정 문자들 중 하나가 처음 등장하는 위치를 찾아주는 함수입니다.
    // strpbrk는 내부적으로 하나씩 비교하면서 검색한 위치를 기억합니다.
    // 다음에 호출할 떄 다음 인덱스부터 비교합니다. 그리고 마지막까지 가면 NULL을 반환합니다.
    while ((name_p = strpbrk(name_p, "oa")) != NULL) {

        printf("구분자 출력 : %c \n", *name_p);
        printf("인덱스 출력 : %td\n", name_p - my_name);
        name_p++;
    }

    return 0;
}