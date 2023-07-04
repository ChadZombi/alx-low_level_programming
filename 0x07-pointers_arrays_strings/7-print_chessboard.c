#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to a 2D array representing the chessboard.
 *
 * Description: The chessboard is represented by an 8x8 2D array
 * where each element corresponds to a square on the chessboard.
 * The elements can be characters representing the pieces or empty squares.
 * This function prints the chessboard to the console.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
