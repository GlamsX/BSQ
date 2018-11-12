/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** [enter description here]
*/

#include "../include/my.h"

int get_x(char *buffer)
{
    int x = 0;

    if (!buffer)
        return (0);
    for (int i = 0; buffer[i] != '\n'; i++)
        x = (x + buffer[i] - '0') * 10;
    x /= 10;
    return (x);
}

int get_size(int *map)
{
    int size = 0;

    for (int i = 0; map[i] != -1; i++)
        size++;
    return (size);
}

int get_y(char *buffer)
{
    int i = 0;
    int y = 0;

    if (!buffer)
        return (0);
    for (; buffer[i] != '\n'; i++);
    i++;
    for (; buffer[i] != '\n'; i++)
        y++;
    return (++y);
}
