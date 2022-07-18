#include "main.h"
/**
 * set_string-main function to set a string to a pointer
 *
 * @s:'Pointer to a Pointer Variable'
 * @to:'pointer variable'
 *
 * Return:Pointer to the character string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
