/*
** EPITECH PROJECT, 2023
** project my_sokoban
** File description:
** function to get all the info from my file (map)
*/

#include "../my_sokoban.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int carac = 0;

    while (carac < n) {
        dest[carac] = src[carac];
        carac++;
    }
    return dest;
}

int count_words(char *str, char sep)
{
    int words = 0;
    int is_in_word = 0;

    if (str == NULL || str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == sep && is_in_word == 0)
            continue;
        if (str[i] == sep && is_in_word == 1) {
            words++;
            is_in_word = 0;
            continue;
        }
        is_in_word = 1;
    }
    if (is_in_word == 1)
        words++;
    return words;
}

char **my_str_to_word_array(char *str, char sep)
{
    int nb_words = count_words(str, sep);
    int word_index = 0;
    int word_len = 0;
    char **tab = malloc(sizeof(char *) * (nb_words + 1));

    for (; str[0] != '\0';) {
        word_len = 0;
        for (; str[word_len] != '\0' && str[word_len] != sep; word_len++);
        if (word_len == 0)
            break;
        tab[word_index] = malloc(sizeof(char) * (word_len + 1));
        my_strncpy(tab[word_index], str, word_len);
        tab[word_index][word_len] = '\n';
        word_index++;
        for (; str[0] != '\0' && str[0] != sep; str++);
        for (; str[0] != '\0' && str[0] == sep; str++);
    }
    tab[word_index] = NULL;
    return tab;
}
