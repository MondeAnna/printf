#ifndef MAIN_H
#define MAIN_H

#define FILE_DESCRIPTOR 1
#define TRUE 1

#include <assert.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* print - specifier to function mapper
 * @descriptor: function specifier
 * @execute: function mapped being to
 *
 * Description: char specifier mapped to
 * function that executes specialised
 * printer
 */
typedef struct print {
	char *descriptor;
	int (*execute)(va_list args);
} print_t;

/* for external use */
int _printf(const char *format, ...);

/* select specifier mapped printer */
int (*get_printer(char *spec))(va_list args);

/* digit printers */
int print_bin(va_list args);
int print_bin_helper(int num);

int print_int(va_list args);
int print_int_helper(int num);

int print_unsigned_int(unsigned int num);

int print_hex_lower(va_list args);
int print_hex(const char specifier, int num);

int print_oct(int num);

/* alphabet printers*/
int print_char(va_list args);
int print_format(char *str, int len);
int print_str(va_list args);

/* utilities*/
int _strcmp(char *s1, char *s2);
int _strlen(char *str);
int _strlen_desc(char *str);

#endif  /* MAIN_H */
