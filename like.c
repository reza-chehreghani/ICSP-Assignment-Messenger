#include "main.h"
void like(account *user_head)
{
    char *username = NULL; /*Get username*/
    printf("Your choice username: ");
    dynamic_input(&username, ' ', '\n');
    printf("%s\n", username);
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
    account *user = scan_user_list(user_head, username); /*Find user*/
    if (user == NULL)
    {
        printf("This username doesn't exist. Please try again.\n");
        return;
    }
    post *post = scan_post_list(user->post_head, post_id); /*Find post*/
    if (post == NULL)
    {
        printf("This postID doen't exist. Please try again.\n");
        return;
    }
    post->like++;
    printf("you liked post successfully\n\n");
    return;
}