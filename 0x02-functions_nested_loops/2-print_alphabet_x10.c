#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, each followed
 *                       by a new line
 */
void print_alphabet_x10(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        j = 0;
        while (j < 26)
        {
            _putchar('a' + j);
            j++;
        }
        _putchar('\n');
    }
}
