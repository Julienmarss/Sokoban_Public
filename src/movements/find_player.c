/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** function to get the location of the player
*/

#include "../../my_sokoban.h"

void find_player2(info_sb *info, pos_p *player, int i, int j)
{
    if (info->my_map[i][j] == 'P') {
        player->x = j;
        player->y = i;
        player->y_origin = i;
        player->x_origin = j;
        info->my_map[i][j] = ' ';
    }
}

int find_player(info_sb *info, pos_p *player)
{
    int j = 0;

    for (int i = 0; info->my_map[i] != NULL; i++) {
        j = 0;
        for (; info->my_map[i][j] != 0; j++) {
            find_player2(info, player, i, j);
        }
    }
    return 0;
}
