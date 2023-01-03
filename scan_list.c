#include "main.h"
user *scan_user_list(user *head, char *username)
{
    for (user *current = head; current != NULL; current = current->next)
        if (!strcmp(current->username, username))
            return current;
    return NULL;
}
post *scan_post_list(post *head, int post_id)
{
    
    for (post *current = head; current != NULL; current = current->next)
        if (current->post_id == post_id)
            return current;
    return NULL;
}