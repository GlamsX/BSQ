/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

typedef struct global_s
{
    char *buf;
    int *map;
    int line;
    int cols;
} global_t;

int bsq_main(char *);
int display_error(int);
int *convert_map_to_array_int(int *, char *);
int get_size(int *);
int get_x(char *);
int get_y(char *);
int *create_map(int *, char *);
global_t *convert_intmap_tochar(global_t *);
global_t *algo_find_square(global_t *);
global_t *convert_into_digits(global_t *);
void final_map(global_t *);
void init_struct(global_t *, char *, int *);
void find_and_print_square(int *, char *);

#endif
