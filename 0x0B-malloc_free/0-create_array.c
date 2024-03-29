#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 *
 * @size: size of memory allocated.
 * @c: The characters initialised to array created.
 *
 * Return: Pointer to the array.
 * NULL if size == 0.
 * NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(*ch) * size);
	if (ch)
	{
		for (i = 0; i <= size; i++)
			ch[i] = c;
		return (ch);
	}
	else
		return (NULL);
}

