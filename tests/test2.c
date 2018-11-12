/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** tests
*/

#include "../include/my.h"
#include <criterion/criterion.h>

int define_square(global_t *all, int i);


Test(convert_map_to_array_int, test_1_conversion)
{
    char buffer[11] = "a\naze\nazer\0";
    int map[11];
    int nmap[11] = {'a','z','e',-2,'a','z','e','r',-1};

    cr_assert(convert_map_to_array_int(map, buffer) != nmap);
}
