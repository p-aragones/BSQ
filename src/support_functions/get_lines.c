/*
** EPITECH PROJECT, 2020
** get_lines
** File description:
** get the number of lines in the map
*/

#include "libmy.h"
#include "bsq.h"

int get_lines(char *map_string)
{
    int i = 0;
    char *first_line = malloc(sizeof(char) * FIRST_LINE_SIZE);
    int line_num = 0;

    if (map_string == NULL || first_line == NULL)
        return (404);
    while (map_string[i] != '\n') {
        first_line[i] = map_string[i];
        i++;
    }
    first_line[i] = '\0';
    if (my_str_isnum(first_line) == 0)
        return (404);
    line_num = my_getnbr(first_line);
    free (first_line);
    return (line_num);
}