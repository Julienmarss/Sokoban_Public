/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** .h for all my includes my struct and functions that I use
*/

#ifndef MY_SOKOBAN
    #define MY_SOKOBAN
        #include <unistd.h>
        #include <stdlib.h>
        #include <sys/stat.h>
        #include <sys/types.h>
        #include <curses.h>
        #include <fcntl.h>

typedef struct {
    int x;
    int y;
    int x_origin;
    int y_origin;
} pos_p;

typedef struct {
    char **my_map;
    char **my_mapsaved;
    int map_check;
    int cols;
    int rows;
    int storage;
    int box;
    int player;
    int ch;
    bool GameIsFinished;
} info_sb;

int init_info(info_sb *info, pos_p *player, char **av);
long int file_size(char const *file);
int get_nb_of_rows(char *str);
int get_nb_of_cols(char *str);
char **map_loader(char *file, info_sb *info);
void manage_movements(info_sb *info, pos_p *player);
void sokoban(char **av, pos_p *player, info_sb *info);
char **my_str_to_word_array(char *str, char sep);
void show_map(char **map);
char **map_to_word_array(char *str);
int checker_map(char *map);
int error_handling_map(char *map, info_sb *info);
void my_putchar(char c);
int my_putstr(char const *str);
int find_player(info_sb *info, pos_p *player);
int move_down(info_sb *info, pos_p *player);
int move_upper(info_sb *info, pos_p *player);
int move_left(info_sb *info, pos_p *player);
int move_right(info_sb *info, pos_p *player);
void storage_error_handling(info_sb *info, pos_p *player);

#endif /* MY_SOKOBAN */
