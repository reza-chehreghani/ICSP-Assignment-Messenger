// gcc main.c signup.c login.c input.c scan_list.c new_post.c like.c delete.c info.c find_user.c
#include "main.h"
#include "functions.h"
#define MAX_LENGTH_ORDER 6
#define ACCOUNTS "accounts.txt"
int main()
{
    printf("Welcome\n");
    account *user_head = NULL;
    char order[MAX_LENGTH_ORDER + 1]; /*Get order*/
    while (TRUE)
    {
        printf("Orders:\nsignup <username> <password>\nlogin <username> <password>\nexit\nWhat do you want to do? ");
        fflush(stdin);
        input(order, MAX_LENGTH_ORDER + 1);
        if (!strcmp(order, "signup"))
            signup(&user_head);
        else if (!strcmp(order, "login"))
            login(user_head);
        else if (!strcmp(order, "exit"))
            break;
        else
            printf("You enter wrong order. Pleade try again.\n");
        FILE *accounts = fopen(ACCOUNTS, "w"); /*Write accounts in a file*/
        for (account *user_current = user_head; user_current != NULL; user_current = user_current->next)
        {
            int number_of_posts = 0;
            for (post *post_current = user_current->post_head; post_current != NULL; post_current = post_current->next)
                number_of_posts++;
            fprintf(accounts, "%s %s %d\n", user_current->username, user_current->password, number_of_posts);
        }
        fclose(accounts);
    }
    printf("You exited successfully.");
    return 0;
}