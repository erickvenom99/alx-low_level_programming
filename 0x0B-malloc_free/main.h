#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
int _putchar(char c);
#endif
