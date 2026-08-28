#include <stdio.h>

typedef struct USERDATA {

    char name [30];
    char phone [30];
    struct USERDATA * p;

} USERDATA;


void link_test (USERDATA * p) {

    if (p == NULL){
        return;
    }

    printf("%s, %s\n", p->name, p->phone);
    link_test(p->p);
};


int main (void) {

    USERDATA user_member [4] = {
        {"홍원태", "010-8489-3121", NULL},
        {"홍예지", "010-8489-3121", NULL},
        {"홍라탄", "010-8489-3121", NULL},
        {"홍날두", "010-8489-3121", NULL},
    };

    USERDATA * p_user = &user_member[0];

    user_member[0].p = &user_member[1];
    user_member[1].p = &user_member[2];
    user_member[2].p = &user_member[3];
    user_member[3].p = NULL;

    // while (p_user != NULL) {
    //     printf("%s, %s\n", p_user->name, p_user->phone);
    //     p_user = p_user->p;
    // }

    link_test(p_user);

    return 0;
}