#include "main.h"
void new_post(post **address_post_head)
{
    char *text = NULL; /*Get text*/
    printf("Your text: ");
    dynamic_input(&text, '\n', '\n');
    printf("%s\n", text);
    /*Make post*/
    post **address_address_NewPost; /*The address where the NewPost address should be located*/
    int post_id = 1;
    if (*address_post_head == NULL)
        address_address_NewPost = address_post_head;
    else
    {
        post *current = *address_post_head;
        while (current->next != NULL)
            current = current->next;
        address_address_NewPost = &(current->next);
        post_id = current->post_id + 1;
    }
    *address_address_NewPost = (post *)malloc(sizeof(post));
    (*address_address_NewPost)->post_id = post_id;
    (*address_address_NewPost)->like = 0;
    (*address_address_NewPost)->text = text;
    (*address_address_NewPost)->next = NULL;
    printf("You posted successfully\n\n");
    return;
}