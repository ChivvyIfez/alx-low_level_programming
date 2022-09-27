#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @s: a pionter pointing to a pointer
 * @to: a pointer ponting to non pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
