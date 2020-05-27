/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** my.h
*/

#ifndef __MATCHSTICK_H__
#define __MATCHSTICK_H__

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);
void my_putchar(char c);
void my_putstr(char const *str);
int my_put_nbr(int nb);

int error_handling(int ac, char **av);
int my_atoi(char *str);
int nbr_bottom_matches(int line);

int matchstick(int top, int line_nbr, int max_m);
char **remove_matches(char **board, int line, int rem_m);
int win_check(char **board, int line_nbr);

char **ai_turn(char **board, int line_nbr, int max_m);
void display_ai(int line, int rem_m);

char **player_turn(char **board, int line_nbr, int max_m);
int check_buff(char *buffer);
int legal_match(char **board, int line, int rem_m, int max_rem);
int legal_line(int line_r, int line_nbr);
void display_turn(int line, int rem_m);

char **fill_first_board(char **board, int top, int line_nbr);
char *fill_playable_part(char *line, int i, int top);
void display_board(char **board, int line_nbr);

#define FAIL 84
#define SUCCESS 0

#define PLAYER_W 1
#define AI_W 2
#define PLAYER_LM "You lost, too bad...\n"
#define AI_LM "I lost... snif... but I'll get you next time!!\n"

#define ERROR_ARG "this game takes only 2 positive numbers as arguments\n"
#define ERROR_LINENBR "the number of line must be between 1 and 100\n"

#endif
