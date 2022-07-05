#include "main.c"
/**
 * main - Print "_putchar" followed by a new line
 * Description: you are not allowed to include standard libraries
 * return:0
 */
int main(void)
{
	char printme[]="_putchar";
	int i=0;

	while(printme[i]!= '\0')
	{
		_putchar(printme[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
