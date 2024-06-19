/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** function to get all the info from my file (map)
*/

#include "../../my_sokoban.h"

void storage_error_handling(info_sb *info, pos_p *player)
{
    if (info->my_mapsaved[player->y][player->x] == 'O') {
        info->my_map[player->y][player->x] = 'O';
    }else {
        info->my_map[player->y][player->x] = ' ';
    }
}

void manage_movements(info_sb *info, pos_p *player)
{
    switch (info->ch) {
        case KEY_DOWN:
            move_down(info, player);
            break;
        case KEY_UP:
            move_upper(info, player);
            break;
        case KEY_LEFT:
            move_left(info, player);
            break;
        case KEY_RIGHT:
            move_right(info, player);
            break;
    }
}
