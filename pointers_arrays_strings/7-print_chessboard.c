#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Imprime l'échiquier.
 * @a: Pointeur vers un tableau de 8x8 caractères.
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]); // Imprime chaque case de l'échiquier
        }
        _putchar('\n'); // Nouvelle ligne à la fin de chaque rangée
    }
}