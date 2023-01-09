#include "main.h"
account *scan_user_list(account *head, char *username)
{
    for (account *current = head; current != NULL; current = current->next)
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