#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    int age;
    char name_1 [30];
    char name_2 [30];

} USERDATA;

void test_1 (USERDATA * data_p) {

    strcpy(data_p->name_1, "Mao");
    strcpy(data_p->name_2, "Zuudung");
    data_p->age = 200;


}

USERDATA test_2 (USERDATA data) {

    strcpy(data.name_1, "Hong");
    strcpy(data.name_2, "Won");

    data.age = 10;

    return data;
}


int main () {

    USERDATA u1;

    USERDATA * p = (USERDATA * )malloc(sizeof(USERDATA));

    
    // strcpy(p->name_1, "Hello");
    // strcpy(p->name_2, "World");

    // p->age = 10;

    // printf("name_1 : %s, name_2 : %s, age : %d\n", p->name_1, p->name_2, p->age);

    // p
    test_1(p);
    printf("이름 : %s %s, 나이 : %d\n", p->name_1, p->name_2, p->age);

    u1 = test_2(u1);
    printf("이름 : %s %s, 나이 : %d\n", u1.name_1, u1.name_2, u1.age);


    return 0;
}
