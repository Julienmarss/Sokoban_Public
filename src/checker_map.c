/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** function to get all the info from my file (map)
*/

#include "../my_sokoban.h"

int checker_map(char *map)
{
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] != ' ' && map[i] != 'X' &&
            map[i] != '#' && map[i] != '\n' &&
            map[i] != 'P' && map[i] != 'O') {
            return 1;
            }
        }
    return 0;
}

static int get_nb_player(char *map)
{
    int nb = 0;

    for (int i = 0; map[i] != '\0'; i++){
        if (map[i] == 'P')
            nb++;
    }
    return nb;
}

static int get_nb_o(char *map)
{
    int nb_o = 0;

    for (int i = 0; map[i] != '\0'; i++)  {
        if (map[i] == 'O')
            nb_o++;
    }
    return nb_o;
}

static int get_nb_x(char *map)
{
    int nb_x = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'X')
            nb_x++;
    }
    return nb_x;
}

int error_handling(char *map, info_sb *info)
{
    if (info->player != 1)
        return 84;
    if (info->box != info->storage)
        return 84;
    if (checker_map(map) == 1)
        return 84;
    return 0;
}

int error_handling_map(char *map, info_sb *info)
{
    info->player = get_nb_player(map);
    info->map_check = checker_map(map);
    info->box = get_nb_x(map);
    info->storage = get_nb_o(map);
    if (error_handling(map, info) == 84) {
        return 84;
    }
    return 0;
}
