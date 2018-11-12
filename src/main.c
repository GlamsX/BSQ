/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** bsq
*/

#include "../include/my.h"

void free_memory(int *map, char *buffer)
{
    free(buffer);
    free(map);
}

char *get_file(char *file, int size)
{
    char *buffer = malloc(sizeof(char) * (size + 1));
    int fd = open(file, O_RDONLY);

    if (fd < 0) {
        free(buffer);
        exit(84);
    }
    if (!buffer) {
        free(buffer);
        exit(84);
    }
    read(fd, buffer, size);
    buffer[size] = '\0';
    return (buffer);
}

int main(int ac, char **av)
{
    char *buffer = NULL;
    int *map;
    int size;
    struct stat buf;

    if (ac != 2 || !av)
        exit(84);
    if (stat(av[1], &buf) == -1)
        exit(84);
    size = buf.st_size;
    if ((map = malloc(sizeof(int) * size)) == NULL)
        exit(84);
    buffer = get_file(av[1], size);
    if (!buffer) {
        free(buffer);
        exit(84);
    }
    find_and_print_square(map, buffer);
    free_memory(map, buffer);
    return (0);
}
