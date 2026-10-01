#include <stdio.h>
#include <string.h>


int main (void ) {

    
    char my_name [] = "HongWonTae";

    // name_p에는 H의 주소가 들어가 있습니다.
    char * name_p = my_name;


    // strpbrk -> 문자열에서 특정 문자들 중 하나가 처음 등장하는 위치를 찾아주고 그 위치를 반환하는 함수입니다.
    // 만약 다 검색했는데 없으면 NULL을 반환합니다.
    while ((name_p = strpbrk(name_p, "ao")) != NULL) {

        printf("구분자 출력 : %c \n", *name_p);
        printf("인덱스 출력 : %td\n", name_p - my_name);
        name_p++;
        printf("\n");
    }

    return 0;
}