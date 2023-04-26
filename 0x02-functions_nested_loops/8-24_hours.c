#include "main.h"
/**
  * jack_bauer - print every minute of the day
  * starting from 00:00 to 23:59
  * Return: no return
  */
void jack_bauer(void)
{
	int n, o;

	n = 0;

	while (n < 24)
	{
		o = 0;
		while (o < 60)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
			_putchar('\n');
			o++;
		}
		n++;
	}
}
