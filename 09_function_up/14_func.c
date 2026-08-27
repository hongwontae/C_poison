#include <stdio.h>
#include <stdlib.h>


int main () {

    char choice;

    system("ls");

    printf("시스템을 종료하시겠습니까? y or n\n");

    scanf("%c", &choice);

    if (choice == 'y' | choice == 'Y'){
        printf("시스템을 정상적으로 종료시키겠습니다.\n");
        exit(1);
    }

    if (choice != 'y' | choice != 'Y') {
        printf("시스템 비정상 종료\n");
        exit(1);
    }

    return 0;

}