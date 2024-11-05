#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
	int i;

	while (*needle)
	{
		for (i = 0; haystack[i]; i++)
		{
			if (*needle == haystack[i])
				return (s);
		}
		haystack++;
	}
	return (NULL);
}