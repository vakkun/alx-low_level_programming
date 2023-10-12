#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
    int n = 0, m;
    while (n < 10)
    {
        for (m = 0; m < 15; m++)
        {
            _putchar(m + '0');
        }
    _putchar('\n');
    }
}
