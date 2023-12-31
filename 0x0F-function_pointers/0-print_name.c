/**
 * print_name - function that prints a name
 *
 * @name: the name to print
 * @f: pointer to the print function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
