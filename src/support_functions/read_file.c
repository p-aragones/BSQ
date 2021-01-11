/*
** EPITECH PROJECT, 2020
** read_file
** File description:
** read the file given
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "libmy.h"
#include "bsq.h"

char *read_file(char **av)
{
    int size = mesure_size(av);
    char *buff = malloc(sizeof(char) * (size + 1));
    int fd = open(av[1], O_RDONLY);

    if (fd == -1) {
        my_putstr("FAILURE\n");
        return (NULL);
    }
    read (fd, buff, size);
    buff[size] = '\0';
    close (fd);
    return (buff);
}