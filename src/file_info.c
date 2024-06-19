/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** function to get all the info from my file (map)
*/

#include "../my_sokoban.h"

long int file_size(char const *file)
{
    struct stat fileStat;

    stat(file, &fileStat);
    if (fileStat.st_size == -1)
        return 84;
    return fileStat.st_size;
}

char **map_to_word_array(char *str)
{
    char **map_to_array = my_str_to_word_array(str, '\n');

    return map_to_array;
}

char **map_loader(char *file, info_sb *info)
{
    int fd = open(file, O_RDONLY);
    off_t size_file = file_size(file);
    char *map;

    if (fd == -1 || size_file == -1) {
        return NULL;
    }
    map = malloc(sizeof(char) * (size_file + 1));
    if (!map) {
        return NULL;
    }
    if (read(fd, map, size_file) == -1) {
        return NULL;
    }
    map[size_file] = '\0';
    close(fd);
    if (error_handling_map(map, info) == 84)
        return NULL;
    return (map_to_word_array(map));
}
