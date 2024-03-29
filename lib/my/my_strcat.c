/*
** EPITECH PROJECT, 2024
** lib/my/my_strcat.c
** File description:
** Concanates dest and source strings and returns the newly transformed dest.
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int total_size = my_strlen(dest) + my_strlen(src) + 1;
    char *desttmp = dest;

    dest = malloc(sizeof(char) * total_size + 1);
    for (int a = 0; a < my_strlen(desttmp); a++)
        dest[a] = desttmp[a];
    for (int a = my_strlen(desttmp); a < total_size; a++)
        dest[a] = src[a - my_strlen(desttmp)];
    dest[total_size] = 0;
    return dest;
}
