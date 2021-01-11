/*
** EPITECH PROJECT, 2020
** clean_string
** File description:
** clean the string from the first line
*/

#include <stdio.h>
#include "libmy.h"

int clean_string(char *map_string)
{
    int i = 0;

    if (map_string == NULL)
        return (84);
    while (map_string[i] != '\n') {
        i++;
    }
    i++;
    return (i);
}