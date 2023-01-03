#include "main.h"
void delete(post **address_post_head)
{
    char *s_post_id = NULL; /*Get post_id*/
    printf("Your choice posrID: ");
    dynamic_input(&s_post_id, ' ', '\n');
    int post_id = 0;
    if ((post_id = atoi(s_post_id)) == 0)
    {
        printf("You entered wrong thing. Please try again.\n");
        return;
    }
    printf("%d\n", post_id);
    post *current = *address_post_head;
    if (current == NULL)
    {
        printf("There are no posts to delete. Please make a post first.\n");
        return;
    }
    if (current->post_id == post_id)
        *address_post_head = current->next;
    else
    {
        post *previous = current;
        for (current = current->next; current->post_id != post_id; previous = current, current = current->next)
            if (current == NULL)
            {
                printf("This postID doen't exist. Please try again.\n");
                return;
            }
        previous->next = current->next;
    }
    free(current->text);
    free(current);
    printf("You deleted post successfully\n\n");
    return;
}