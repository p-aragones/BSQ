/*
** EPITECH PROJECT, 2020
** increment_while
** File description:
** increment while
*/

#include "bsq.h"

int increment_loop(pos_t *pos, int new_i)
{
    pos->i = pos->i + 1;
    pos->j = 0;
    new_i++;
    return  (new_i);
}