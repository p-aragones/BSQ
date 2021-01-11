/*
** EPITECH PROJECT, 2020
** find_bsq
** File description:
** find the biggest sqr
*/

#include "libmy.h"
#include "bsq.h"
#include <stdio.h>

int find_smallest(int **map_array, int i, int j, sqr_t *sqr)
{
    int small = map_array[i-1][j-1];
    int top_left = map_array[i-1][j-1];
    int top = map_array[i-1][j];
    int left = map_array[i][j-1];

    if (top_left < top)
        small = top_left;
    if (top < left)
        small = top;
    if (left < top_left)
        small = left;
    return (small);
}

int find_bsq(int **map_array, int j, int i, sqr_t *sqr)
{
    int small = 0;

    if (i == 0 || j == 0 || map_array[i][j] == 0) {
        map_array[i][j] = map_array[i][j];
    } else {
        small = find_smallest(map_array, i, j, sqr);
        map_array[i][j] = map_array[i][j] + small;
    }
    if (map_array[i][j] > sqr->size) {
        sqr->size = map_array[i][j];
        sqr->i = i;
        sqr->j = j;
    }
    return (map_array[i][j]);
}