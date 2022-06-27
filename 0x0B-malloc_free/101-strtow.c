#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - free 2 dimensional array
 * @grid: multi dimentioanl
 * @height: height of the array
 * Return no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string
 * Return: pointer of an array
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, i, j, ai;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (i = ai = 0; i < height; i++)
	{
		for (c = ai; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				ai++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - ai + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; ai <= c; ai++, j++)
			aout[i][j] = str[ai];
	}
	aout[i] = NULL;
	return (aout);
}
