/*
** EPITECH PROJECT, 2023
** lib/my/my_strdup.c
** File description:
** Duplicates a given string and returns an allocated copy.
*/

#include "my.h"

char *my_strdup(char const *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));

    return !str ? NULL : my_strcpy(str, src);
}
