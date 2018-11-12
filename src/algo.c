/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** algo
*/

#include "../include/my.h"

int define_square(global_t *all, int i)
{
    int tab[3];
    int lower_val;

    if (all->map == NULL)
        return (0);
    if (all->map[i] == 0)
        return (0);
    tab[0] = all->map[i - 1];
    tab[1] = all->map[i - all->line];
    tab[2] = all->map[i - all->line - 1];
    lower_val = tab[0];
    for (int j = 0; j != 3; j++)
        if (lower_val > tab[j])
            lower_val = tab[j];
    return (lower_val + 1);
}

global_t *algo_find_square(global_t *all)
{
    int i = 0;

    for (; all->map[i] != -2; i++);
    i += 2;
    for (; all->map[i] != -1; i++) {
        if (all->map[i] == -2 && all->map[i + 1] != -1)
            i++;
        else if (all->map[i + 1] != -1)
            all->map[i] = define_square(all, i);
        else
            return (all);
    }
    return (all);
    all->line++;
}
