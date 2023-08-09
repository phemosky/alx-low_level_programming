#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. arraz
 */

int **alloc_grid(int width, int height)
{
	int **hat;
	int a, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	hat = malloc(sizeof(int *) * height);

	if (hat == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		hat[a] = malloc(sizeof(int) * width);

		if (hat[a] == NULL)
		{
			for (; a >= 0; a--)
				free(hat[a]);

			free(hat);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (z = 0; z < width; z++)
			hat[a][z] = 0;
	}

	return (hat);
}
