#include <unistd.h>

/**
 * _putchr - writes the character c to stdout
 * @c: the charactr to print
 *
 * return: on success 1
 * on error, -1 is returned, and error is set approprately
 */
int _putchar(char c)
{
	return (write(1,&c. 1));
}
