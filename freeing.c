#include "header.h"

/**
 * free_all - frees all possible malloc leaks at the end
 * @tokens: token array poiner
 * @path: path pointer
 * @line: input buffer pointer
 * @fullpath: full path pointer
 * @flag: marker of full path malloc
 * Return: void
 */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag)
{
	free(path);
	free(tokens);
	free(line);
	if (flag ==1)
		free(fullpath);
}

/**
 * free_dp - frees double pointers
 * @array: double pointer to free
 * @length: length of dp
 * Return: void
 */
void free_dp(char **array, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (i < length)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
