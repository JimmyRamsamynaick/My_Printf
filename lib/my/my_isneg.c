/*
** EPITECH PROJECT, 2023
** My printf
** File description:
** my_isneg
*/

#include "my.h"

int my_isneg(int n)
{
    my_putchar(n < 0 ? 'N' : 'P');
    my_putchar('\n');
    return 0;
}
