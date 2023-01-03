#include "main.h"
void dynamic_input(char **address_string, char a, char b) /*Get string from buffer*/
{
    int i = 0;
    for (;i == 0 || ((*address_string)[i - 1] != a && (*address_string)[i - 1] != b); i++)
    {
        *address_string = (char *)realloc(*address_string, (i + 1) * sizeof(char));
        (*address_string)[i] = getchar();
    }
    (*address_string)[i - 1] = '\0';
    return;
}
void input(char *string, int max_char) /*Get string from buffer*/
{
    int i = 0;
    for (; i < max_char && (i == 0 || (string[i - 1] != ' ' && string[i - 1] != '\n' && string[i - 1] != '\t')); i++)
        string[i] = getchar();
    string[i - 1] = '\0';
}