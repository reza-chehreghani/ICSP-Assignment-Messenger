// gcc main.c signup.c login.c input.c scan_list.c new_post.c like.c delete.c info.c find_user.c
#include "main.h"
#include "functions.h"
#define MAX_LENGTH_ORDER 6
int main()
{
    printf("Welcome\n");
    user *user_head = NULL;
    char order[MAX_LENGTH_ORDER + 1]; /*Get order*/
    while (TRUE)
    {
        printf("Orders:\nsignup <username> <password>\nlogin <username> <password>\nexit\nWhat do you want to do? ");
        fflush(stdin);
        input (order, MAX_LENGTH_ORDER + 1);
        if (!strcmp(order, "signup"))
            signup(&user_head);
        else if (!strcmp(order, "login"))
            login(user_head);
        else if (!strcmp(order, "exit"))
            break;
        else
            printf("You enter wrong order. Pleade try again.\n");
    }
    printf("You exited successfully.");
    return 0;
}