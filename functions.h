#ifndef _functions_h
#define _functions_h
#include "main.h"
void input(char *string, int max_char);
void signup(account **address_user_head);
void login(account *user_head);
void new_post(post **address_post_head);
void like(account *user_head);
void delete(post **address_post_head);
void info(account *user);
void find_user(account *user_head);
#endif