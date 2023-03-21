#include "main.h"

/**
 * main - check the code
 * Description:prints the alphabet
 * in lowercase, followed by a new line.
 * Return: void
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

