#include "main.h"
#include "functions.h"
#define POSTS "posts.txt"
#define MAX_LENGTH_ORDER 9
void login(account *user_head)
{
    char *username = NULL, *password = NULL; /*Get username and password*/
    printf("Your username: ");               /*Get username*/
    dynamic_input(&username, ' ', '\n');
    printf("%s\nYour password: ", username); /*Get password*/
    dynamic_input(&password, ' ', '\n');
    printf("%s\n", password);
    account *user = scan_user_list(user_head, username); /*Find user*/
    if (user == NULL)
    {
        printf("This username doesn't exist. Please try again.\n");
        return;
    }
    if (strcmp(user->password, password))
    {
        printf("Password is incorrect. Please try again.\n");
        return;
    }
    printf("You loged in successfully.\n\n");
    char order[MAX_LENGTH_ORDER + 2]; /*Get order*/
    while (TRUE)
    {
        printf("Orders:\npost <text>\nlike <username> <postID>\ndelete <postID>\ninfo\nfind_user <username>\nlogout\nWhat do you want to do? ");
        fflush(stdin);
        input(order, MAX_LENGTH_ORDER + 1);
        if (!strcmp(order, "post"))
            new_post(&(user->post_head));
        else if (!strcmp(order, "like"))
            like(user_head);
        else if (!strcmp(order, "delete"))
            delete (&(user->post_head));
        else if (!strcmp(order, "info"))
            info(user);
        else if (!strcmp(order, "find_user"))
            find_user(user_head);
        else if (!strcmp(order, "logout"))
            break;
        else
            printf("You enter wrong order. Pleade try again.\n");
        FILE *posts = fopen(POSTS, "w"); /*Write posts in a file*/
        for (account *user_current = user_head; user_current != NULL; user_current = user_current->next)
            for (post *post_current = user_current->post_head; post_current != NULL; post_current = post_current->next)
                fprintf(posts, "%s %s %d\n", post_current->text, user_current->username, post_current->like);
        fclose(posts);
    }
    printf("You loged out successfully\n\n");
    return;
}