#include "main.h"
#include "functions.h"
void signup(user **address_user_head)
{
    char *username = NULL, *password = NULL; /*Get username and password*/
    printf("Your username: "); /*Get username*/
    dynamic_input(&username, ' ', '\n');
    printf("%s\nYour password: ", username); /*Get password*/
    dynamic_input(&password, ' ', '\n');
    printf("%s\n", password);
    if (scan_user_list(*address_user_head, username) != NULL) /*Check username*/
    {
        printf("This username already exists. Please try again.\n");
        return;
    }
    /*Make user*/
    user **address_address_NewUser; /*The address where the NewUser address should be located*/
    if (*address_user_head == NULL)
        address_address_NewUser = address_user_head;
    else
    {
        user *current = *address_user_head;
        while (current->next != NULL)
            current = current->next;
        address_address_NewUser = &(current->next);
    }
    *address_address_NewUser = (user *)malloc(sizeof(user)); /*Allocate new user*/
    (*address_address_NewUser)->username = username;
    (*address_address_NewUser)->password = password;
    (*address_address_NewUser)->post_head = NULL;
    (*address_address_NewUser)->next = NULL;
    printf("You signed up successfully.\n\n");
    return;
}