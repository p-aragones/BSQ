/*
** EPITECH PROJECT, 2020
** library
** File description:
** specific
*/

#ifndef BSQ_H_
#define BSQ_H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define FIRST_LINE_SIZE 100

typedef struct sqr_s {
    int size;
    int i;
    int j;
} sqr_t;

typedef struct pos_s {
    int i;
    int j;
} pos_t;

int increment_loop(pos_t *, int);
int error_handling(char *, int **, char **);
int find_bsq(int **, int, int, sqr_t *);
int subtracted_chars(char *);
int clean_string(char *);
char **str_to_str_array(char *, int);
int get_columns(char *);
int mesure_size(char **);
int get_lines(char *);
char *read_file(char **);
int bsq(char **);
#endif