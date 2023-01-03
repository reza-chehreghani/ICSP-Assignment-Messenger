#include "main.h"
void info(user *user)
{
    printf("Username: %s\nPassword: %s\n\n", user->username, user->password);
    post *current = user->post_head;
    for (; current != NULL; current = current->next)
        printf("post_id: %d\nlike: %d\npost: %s\n\n", current->post_id, current->like, current->text);
    printf("Your info showed successfully.\n\n");
    return;
}