#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function
 * @s: the operand
 * Return: pointer to the function operand
 */

int (*get_op_func(char *s))(int, int)
{
	op_t oprd[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int y;

	y = 0;

	while (oprd[y].op)
	{
		if (strcmp(oprd[y].op, s) == 0)
		{
			return (oprd[y].f);
		}
		y++;
	}
	return (NULL);
}
