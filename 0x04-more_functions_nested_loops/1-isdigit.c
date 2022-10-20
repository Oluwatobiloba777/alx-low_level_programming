#include "main.h"
/**
 *_isdigit- it checks for a digit 0-9
 *@c: it is an ascii integer
 *Return : 1 if c is a digit , 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
