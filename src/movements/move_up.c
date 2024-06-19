/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** function to manage the case of the player want to go upper
*/

#include "../../my_sokoban.h"

int move_upper(info_sb *info, pos_p *player)
{
    if (info->my_map[player->y - 1][player->x] != '#' &&
        info->my_map[player->y - 1][player->x] != 'X')
        player->y = player->y - 1;
    else if (info->my_map[player->y - 1][player->x] == 'X' &&
    info->my_map[player->y - 2][player->x] != 'X' &&
    info->my_map[player->y - 2][player->x] != '#') {
        player->y = player->y - 1;
        storage_error_handling(info, player);
        info->my_map[player->y - 1][player->x] = 'X';
    }
    return 0;
}
