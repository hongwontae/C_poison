#include <stdio.h>
#include <string.h>


int main (void ) {

    
    char my_name [] = "HongWonTae";

    // name_p에는 H의 주소가 들어가 있습니다.
    char * name_p = my_name;

    while ((name_p = strpbrk(name_p, "oa")) != NULL) {

        printf("구분자 출력 : %c \n", *name_p);
        printf("인덱스 출력 : %td\n", name_p - my_name);
        name_p++;
    }

    return 0;
}