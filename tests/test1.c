/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** criterion
*/

#include "../include/my.h"
#include <criterion/criterion.h>

Test(get_x, find_x_test_1)
{
    cr_assert(get_x(NULL) == 0);
}

Test(get_x, find_x_test_2)
{
    char str[12] = "Aoi\nAZEOIl";

    cr_assert(get_x(str) != 3);
}

Test(get_y, get_y_test_1)
{
    cr_assert(get_y(NULL) == 0);
}

Test(get_y, get_y_test_2)
{
    char str[12] = "Aoi\nAZEOIl\n";

    cr_assert(get_y(str) != 0);
}

Test(get_size, get_size_test_1)
{
    int map[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -1};

    cr_assert(get_size(map) == 9);
}
