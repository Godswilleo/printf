#include "main.h"

/**
 * get_flag - turns on flags if print finds a flag mod.
 * format string
 * @s: character holding a flag specifier
 * @f: pointer to the struct flag
 *
 * Return: 1 or 0 depending on the state of the flag
 * Authors: Godswill Enaohwo & Oluwashogo Akadiri
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)

	{

		case '+':
			f->plus = 1;
			i = 1;
			break;

		case ' ':
			f->space = 1;
			i = 1;
			break;

		case '#':
			f->hash = 1;
			i = 1;
			break;

	}

	return (i);
}
