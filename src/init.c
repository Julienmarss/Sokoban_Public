/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** function to get all the info from my file (map)
*/

#include "../my_sokoban.h"

int init_info(info_sb *info, pos_p *player, char **av)
{
    info->GameIsFinished = false;
    info->my_map = map_loader(av[1], info);
    info->my_mapsaved = map_loader(av[1], info);
    info->box = 0;
    info->storage = 0;
    info->cols = 0;
    info->rows = 0;
    info->player = 0;
    player->x = 0;
    player->y = 0;
    if (info->my_map == NULL)
        return 84;
    return 0;
}
