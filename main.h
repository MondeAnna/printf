#ifndef MAIN_H
#define MAIN_H

#include <assert.h>
#include <stdlib.h>
#include <unistd.h>

/* digit printers */
int print_bin(int num);
int print_int(int num);

/* alphabet printers*/
int print_char(char c);
int print_str(char *str);

/* utilities*/
int _strlen(char *str);

#endif  /* MAIN_H */
