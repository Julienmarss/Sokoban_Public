/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** my_putstr
*/

#include "../my_sokoban.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
