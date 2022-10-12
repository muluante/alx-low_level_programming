#include "func_pointers.h"

/**
 * print_name - name to prints
 * @name: name to be printed
 * @f: callback function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(*f)(name);

}
