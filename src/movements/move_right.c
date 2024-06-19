/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** function to manage the case of the player want to go right
*/

#include "../../my_sokoban.h"

int move_right(info_sb *info, pos_p *player)
{
    if (info->my_map[player->y][player->x + 1] != '#' &&
        info->my_map[player->y][player->x + 1] != 'X')
        player->x = player->x + 1;
    else if (info->my_map[player->y][player->x + 1] == 'X' &&
    info->my_map[player->y][player->x + 2] != 'X' &&
    info->my_map[player->y][player->x + 2] != '#') {
        player->x = player->x + 1;
        storage_error_handling(info, player);
        info->my_map[player->y][player->x + 1] = 'X';
    }
    return 0;
}
