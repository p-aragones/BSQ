/*
** EPITECH PROJECT, 2020
** subtracted_numbers
** File description:
** get the number of subtracted characters
*/

int subtracted_chars(char *map_string)
{
    int i = 0;

    while (map_string[i] != '\n') {
        i++;
    }
    i++;
    return (i);
}