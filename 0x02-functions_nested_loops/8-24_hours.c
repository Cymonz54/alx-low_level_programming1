#include "main.h"

/**
 * jack_baver - Prints every minute of the day of Jack Baver
 * Return: ...
 */

void jack_baver(void)

{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 2; b++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 2; d++)
					{
						_putchar(a + '0');
						_
putchar(b + '0');
						_
putchar(58);
						_
putchar(c + '0');
						_
putchar(d + '0');
						_
putchar('\n');
					}
				}
			}
		}
	}
}
