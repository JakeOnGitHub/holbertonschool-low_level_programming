#include "3-calc.h"

/**
* get_op_func - selects proper function
* @s: input character
* Return: function pointer or exit if error
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
			};
	int x = 0;

	while (ops[x].op != NULL)
	{
		if (*(ops[x]).op == *s)
		break;
		x++;
	}
	return (ops[x].f);
}
