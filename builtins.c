#include "header.h"

/**
 * shell_exit - exits the shell
 * Return: void
 */

int shell_exit(void)
{	return (-1);
}

/**
 * shell_env - prints environment
 * Return: void
 */

int shell_env(void)
{
	unsigned int cnt;

	cnt = 0;
	while (environ[cnt] != NULL)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		cnt++;
	}
	return (0);
}
