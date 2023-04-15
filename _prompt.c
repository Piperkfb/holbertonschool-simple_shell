#include "header.h"
/**
 * prompt - checks mode and prints prompt
 * @fd: file stream
 * @buf: Buffer
 */
void prompt(int fd, struct stat buf)
{
	fstat(fd, &buf);

	if (S_ISCHR(buf.st_mode))
		_puts(prompt);
}

/**
 * _puts - prints a string without a new line
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	unsigned int length;

	length = _strlen(str);

	write(STDOUT_FILENO, str, length);
}
