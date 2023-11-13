#include "test_main.h"

/**
 * test_print_int - test case for int printer
 *
 * Return: void
 */
void test_print_int(void)
{
	/* print out of zero to be zero */
	/* assert(print_int(0) == 1); */

	/* print out of 0 < n < 10 to be one char*/
	/* assert(print_int(5) == 1); */

	/* print out of n < 0 to include `-` */
	/* assert(print_int(-10) == 3); */

	/* print out of n digit long value is n chars */
	/* assert(print_int(12345) == 5); */
}

/**
 * test_print_unsigned_int - test case for unsigned int
 * printer
 *
 * Return: void
 */
void test_print_unsigned_int(void)
{
	/* print out of zero to be zero */
	assert(print_unsigned_int(0) == 1);

	/* print out of 0 < n < 10 to be one char*/
	assert(print_unsigned_int(4294967295) == 10);
}

/**
 * test_print_hex - test case for unsigned int
 * printer
 *
 * Return: void
 */
void test_print_hex(void)
{
	/* print out of zero to be zero */
	assert(print_hex('x', 0) == 1);

	/* expected printout: b */
	assert(print_hex('x', 11) == 1);

	/* expected printout: F */
	assert(print_hex('X', 15) == 1);

	/* expected printout: 10 */
	assert(print_hex('x', 16) == 2);

	/* expected printout: B5B */
	assert(print_hex('X', 2907) == 3);
}

/**
 * test_print_oct - test case for unsigned int
 * printer
 *
 * Return: void
 */
void test_print_oct(void)
{
	/* print out of zero to be zero */
	assert(print_oct(0) == 1);

	/* expected printout: 7 */
	assert(print_oct(7) == 1);

	/* expected printout: 17 */
	assert(print_oct(15) == 2);

	/* expected printout: 1172 */
	assert(print_oct(635) == 4);
}
