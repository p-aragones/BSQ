/*
** EPITECH PROJECT, 2020
** get_columns
** File description:
** get the number of columns
*/

#include "libmy.h"
#include <stdio.h>

int get_columns(char *map_string)
{
    int i = 0;
    int nbr = 0;

    if (map_string == NULL)
        return (404);
    while (map_string[i] != '\n') {
        i++;
    }
    i++;
    while (map_string[i] != '\n') {
        nbr++;
        i++;
    }
    return (nbr);
}