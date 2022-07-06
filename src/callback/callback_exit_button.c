/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_exit_button
*/

#include "game.h"

void callback_exit_button(game_t *game, UNUSED void *params)
{
    if (!game)
        return;
    sfRenderWindow_close(WINDOW);
}
