#include "main.h"
void find_user(account *user_head)
{
    char *username = NULL; /*Get username*/
    printf("Your choice username: ");
    dynamic_input(&username, ' ', '\n');
    printf("%s\n", username);
    account *user = scan_user_list(user_head, username); /*Find user*/
    if (user == NULL)
    {
        printf("This username doesn't exist. Please try again.\n");
        return;
    }
    post *current = user->post_head;
    int i = 0;
    for (; current != NULL; current = current->next, i = 1)
        printf("user: %s\npost_id: %d\nlike: %d\npost: %s\n\n", user->username, current->post_id, current->like, current->text);
    if (i == 0)
        printf("user: %s\nThere are no posts.\n\n", user->username);
    printf("Your choice user information showed successfully\n\n");
    return;
}