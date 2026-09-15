#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 함수에 구조체 포인터를 넘겨서 변경
// 함수에 값을 줘서 변경 return 값으로 받아서 해결

typedef struct {

    int age;
    char name_1 [30];
    char name_2 [30];

} USERDATA;

void change_struct (USERDATA * pointer) {
    pointer->age = 10;
    strcpy(pointer->name_1, "Hong");
    strcpy(pointer->name_2, "YUI");
}

USERDATA change_struct_2 (USERDATA ud) {
    ud.age = 200;
    strcpy(ud.name_1, "ZZZZ");
    strcpy(ud.name_2, "xxxx");

    return ud;
}



int main () {

    USERDATA u1;

    USERDATA * p = (USERDATA *) malloc (sizeof(USERDATA));

    change_struct(p);

    USERDATA u2 = change_struct_2(u1);

    printf("p %d,%s,%s \n", p->age, p->name_1, p->name_2);

    printf("u2 %d, %s, %s\n", u2.age, u2.name_1, u2.name_2);

    return 0;
}
