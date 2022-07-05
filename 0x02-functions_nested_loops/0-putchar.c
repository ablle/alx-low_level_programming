#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description : You are not allowed to include standard libraries.
 * Return : 0.
 */
int main(void)
{
	char printme[] = "_putchar";
	int i = 0;

	while (printme[i] != '\0')
	{
		_putchar(printme[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
