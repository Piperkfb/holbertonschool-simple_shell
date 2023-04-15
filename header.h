#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER 1024
#define TRUE 1
#define PROMPT "$ "

#define MALLOC_ERR "Unable to malloc space\n"
#define FORK_ERR "Unable to fork and create child process\n"
#define PATH_ERR "No such file or directory\n"

extern char **environ;

/**
 * struct llist_s - linked list of variables
 * @value: value
 * @next: Nextnode's pointer
 */
typedef struct llist_s
{
       char *value;
       struct llist_s *next;
} llist_s;

/**
 * struct built_s - linked list for builtins
 * @name: builtin specifier
 * @p: pointer to function
 */

typedef struct built_s
{
	char *name;
	int (*p)(void);
} built_s;

/* Str functions */
int _strlen(char *s);
int _strcmp(char *name, char *variable, unsigned int length);
int _strncmp(char *name, char *variable, unsigned int length);
char *_strcpy(char *dest, char *src);
void _puts(char *str);

/* Builtin functions */
int shell_env(void);
int shell_exit(void);
int builtin_execute(char **tokens);
int shell_num_builtins(built_s builtin[]);

/* Freeing functions */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag);
void free_dp(char **array, unsiged int lenth);

/* PATH related functions */
char *_getenv(const char *name);
char **copy_env(char **environ_copy, unsigned int environ_length);
list_s *pathlist(char *variable, list_s *head);

/* Others */
void prompt(int fd, struct stat buf);
char *_getline(FILE *fp);
char **tokenizer(char *str);
char *_which(char *command, char *fullpath, char *path);
int child(char *fullpath, char **tokens);
void errors(int error);

#endif

