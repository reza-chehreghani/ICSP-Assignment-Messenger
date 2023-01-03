#ifndef _functions_h
#define _functions_h
#include "main.h"
void input(char *string, int max_char);
void signup(user **address_user_head);
void login(user *user_head);
void new_post(post **address_post_head);
void like(user *user_head);
void delete(post **address_post_head);
void info(user *user);
void find_user(user *user_head);
#endif