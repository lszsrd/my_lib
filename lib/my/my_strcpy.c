/*
** EPITECH PROJECT, 2024
** lib/my/my_strcopy.c
** File description:
** Copies the sources string to the dest string and returns it.
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    for (int a = 0; a <= my_strlen(src); a++)
        dest[a] = src[a];
    return dest;
}
