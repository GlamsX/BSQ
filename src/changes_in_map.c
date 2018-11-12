/*
** EPITECH PROJECT, 2018
** map_transformation
** File description:
** map_transformation
*/

#include "../include/my.h"

void final_map(global_t *all)
{
    int i = 0;

    for (; all->map[i] != -1; i++)
        all->buf[i] = all->map[i];
    all->buf[i] = '\0';
    for (int i = 0; all->buf[i] != '\0'; i++)
        if (all->buf[i] == -2)
            all->buf[i] = '\n';
}

global_t *convert_into_digits(global_t *all)
{
    for (int i = 0; all->map[i] != -1; i++) {
        if (all->map[i] == '.')
            all->map[i] = 1;
        else if (all->map[i] == 'o')
            all->map[i] = 0;
    }
    return (all);
}

void define_values(global_t *all, int *bs, int *bsp)
{
    for (int i = 0; all->map[i] != -1; i++) {
        if (all->map[i] > *bs && all->map[i] != -2) {
            *bs = all->map[i];
            *bsp = i;
        }
    }
}

global_t *convert_intmap_tochar(global_t *all)
{
    int bs = 0;
    int bsp = 0;
    int j = 0;

    define_values(all, &bs, &bsp);
    for (int i = 0; all->map[i] != -1; i++)
        if (all->map[i] > bs && all->map[i] != -2) {
            bs = all->map[i];
            bsp = i;
    }
    for (int i = bsp; j != bs; j++, i--)
        for (int k = 0; k != bs; k++)
            all->map[i - all->line * k] = 'x';
    for (int i = 0; all->map[i] != -1; i++) {
        if (all->map[i] != 0 && all->map[i] != 'x' && all->map[i] != -2)
            all->map[i] = '.';
        if (all->map[i] == 0)
            all->map[i] = 'o';
    }
    return (all);
}
