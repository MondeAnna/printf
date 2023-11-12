#ifndef MAIN_H
#define MAIN_H

#include <assert.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* print - specifier to function mapper
 * @descriptor: function specifier
 * @print_func: function mapped being to
 *
 * Description: char specifier mapped to
 * function that executes specialised
 * printer
 */
typedef struct print {
	char *descriptor;
	int (*print_func)(int num);
} print_t;

/* for external use */
int _printf(const char *format, ...);

/* digit printers */
int print_bin(int num);
int print_int(int num);
int print_unsigned_int(unsigned int num);
int print_hex(const char specifier, int num);
int print_oct(int num);

/* alphabet printers*/
int print_char(char c);
int print_str(va_list args);

/* utilities*/
int _strlen(char *str);

#endif  /* MAIN_H */
