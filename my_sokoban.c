/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** main function for my project
*/

#include "my_sokoban.h"

void start_ncurse(void)
{
    initscr();
    keypad(stdscr, TRUE);
}

void start_ncruse2(void)
{
    noecho();
    curs_set(0);
}

void sokoban(char **av, pos_p *player, info_sb *info)
{
    init_info(info, player, av);
    if (init_info(info, player, av) == 84)
        exit(84);
    start_ncurse();
    show_map(info->my_map);
    start_ncruse2();
    info->ch = '\0';
    find_player(info, player);
    while (info->GameIsFinished != true) {
        info->ch = getch();
        manage_movements(info, player);
        clear();
        show_map(info->my_map);
        mvprintw(player->y, player->x, "P");
        refresh();
    }
    endwin();
}

void help_h(void)
{
    write(1, "USAGE\n     ./my_sokoban map\nDESCRIPTION\n     map file", 53);
    write(1, " representing the warehouse map, containing '#' for walls", 57);
    write(1, ",\n         'P' for the player, 'X' for boxes and 'O' for ", 57);
    write(1, "storage locations.\n", 19);
}

int main(int ac, char **av)
{
    pos_p *player = malloc(sizeof(pos_p));
    info_sb *info = malloc(sizeof(info_sb));

    if (ac != 2){
        return 84;
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help_h();
    }else {
        sokoban(av, player, info);
    }
    free(player);
    free(info);
    return 0;
}
