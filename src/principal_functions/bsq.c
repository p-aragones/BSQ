/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** bsq
*/

#include "libmy.h"
#include "bsq.h"

pos_t init_pos(pos_t pos)
{
    pos.i = 0;
    pos.j = 0;
    return (pos);
}

sqr_t init_sqr(sqr_t sqr)
{
    sqr.size = 0;
    sqr.i = 0;
    sqr.j = 0;
    return (sqr);
}

void print_sqr(sqr_t sqr, int line_num, int column_num, int **arr)
{
    int i = 0;
    int j = 0;

    while (i < line_num) {
        while (j < column_num) {
            if ((j > (sqr.j - sqr.size) && j <= sqr.j) &&
            (i > (sqr.i - sqr.size) && i <= sqr.i)) {
                my_putchar('x');
            } else if (arr[i][j] == 0)
                my_putchar('o');
            else
                my_putchar('.');
            j++;
        }
        my_putchar('\n');
        j = 0;
        free (arr[i]);
        i++;
    }
    free (arr);
}

int init_arr(int **arr, pos_t pos, int new_i, char *str)
{
    if (str[new_i] == '.') {
        arr[pos.i][pos.j] = 1;
    } else if (str[new_i] == 'o')
        arr[pos.i][pos.j] = 0;
    return (arr[pos.i][pos.j]);
}

int bsq(char **av)
{
    char *str = read_file(av);
    int line_num = get_lines(str);
    int **arr = malloc(sizeof(int *) * line_num);
    int column_num = get_columns(str);
    int new_i = clean_string(str);
    sqr_t sqr = init_sqr(sqr);
    pos_t pos = init_pos(pos);

    if (error_handling(str, arr, av) != 0)
        return (84);
    while (pos.i < line_num) {
        arr[pos.i] = malloc(sizeof(int) * column_num);
        if (arr[pos.i] == NULL)
            return (84);
        while (pos.j < column_num) {
            arr[pos.i][pos.j] = init_arr(arr, pos, new_i, str);
            arr[pos.i][pos.j++] = find_bsq(arr, pos.j, pos.i, &sqr);
            new_i++;
        }
        pos.j = 0;
        pos.i++;
        new_i++;
    }
    print_sqr(sqr, line_num, column_num, arr);
    free (str);
    return (0);
}