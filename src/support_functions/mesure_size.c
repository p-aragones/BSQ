/*
** EPITECH PROJECT, 2020
** mesure_size
** File description:
** mesure size of the map
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "libmy.h"
#include "bsq.h"

int mesure_size(char **av)
{
    struct stat buffsize;

    stat(av[1], &buffsize);
    return (buffsize.st_size);
}