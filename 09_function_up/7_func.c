#include <stdio.h>
#include <string.h>

int main (void){

char str[] = "hello world C";
char * saveper;

char *token = __strtok_r(str, " ", &saveper);


while (token != NULL) {
    printf("%s\n", token);
    printf("%s\n", saveper);
    token = strtok_r(NULL, " ", &saveper);
}

    return 0;
}