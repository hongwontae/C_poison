#include <stdio.h>

int main (void){


    char name [32] = {0};
    int age;

    printf("이름을 입력하세요\n");
    scanf("%s", name);
    printf("나이를 입력하세요\n");
    scanf("%d", &age);
    

    printf("당신의 나이는 %d이고 이름은 %s입니다.\n", age, name);

    return 0;
}