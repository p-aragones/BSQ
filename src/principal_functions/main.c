/*
** EPITECH PROJECT, 2020
** main
** File description:
** main file of my_printf
*/

#include "libmy.h"
#include "bsq.h"

int main(int ac, char **av)
{
    int error = 0;

    if (ac < 2)
        return (84);
    error = bsq(av);
    (void)ac;
    return (error);
}
