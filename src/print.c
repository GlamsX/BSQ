/*
** EPITECH PROJECT, 2018
** map_transformation
** File description:
** map_transformation
*/

#include "../include/my.h"

void find_and_print_square(int *map, char *buffer)
{
    global_t *all = malloc(sizeof(global_t));

    init_struct(all, buffer, map);
    all = convert_into_digits(all);
    if ((all->line - 1) != 1 && all->cols != 1)
        all = algo_find_square(all);
    all = convert_intmap_tochar(all);
    final_map(all);
    write(1, all->buf, get_size(all->map));
    free(all);
}
