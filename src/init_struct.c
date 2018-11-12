/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** init_sturct
*/

#include "../include/my.h"

int *convert_map_to_array_int(int *map, char *buffer)
{
    int i = 0;
    int j = 0;

    for (; buffer[i] != '\n'; i++);
    i++;
    for (; buffer[i] != '\0'; i++, j++)
        map[j] = buffer[i];
    map[j] = -1;
    for (int i = 0; map[i] != -1; i++)
        if (map[i] == '\n')
            map[i] = -2;
    return (map);
}

void init_struct(global_t *all, char *buffer, int *map)
{
    all->buf = buffer;
    all->map = convert_map_to_array_int(map, buffer);
    all->line = get_y(buffer);
    all->cols = get_x(buffer);
}
