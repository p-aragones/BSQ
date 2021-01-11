/*
** EPITECH PROJECT, 2020
** error_handling
** File description:
** error handling
*/

#include "libmy.h"
#include "bsq.h"

int error_handling(char *str, int **arr, char **av)
{
    int line_num = get_lines(str);
    int column_num = get_columns(str);
    int new_i = clean_string(str);

    if (str == NULL || mesure_size(av) == 0 || arr == NULL || line_num == 404 ||
    column_num == 404 || new_i > 10 || read_file == NULL)
        return (84);
    else
        return (0);
}