#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
  * get_op_func-it selects the correct function to perform the operation asked
  * by the user
  * @s:string point
  *
  * Return:a pointer
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int a = 0;

	while (a < 5)
	{
		if (strcmp(s, ops[a].op) == 0)
			return (ops[a].f);

		a++;
	}

	return (0);
}
