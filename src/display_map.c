/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** function to get all the info from my file (map)
*/

#include "../my_sokoban.h"

void show_map(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        printw("%s", map[i]);
    }
}
