#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Print different combinationof two digits'
  *Return: Always 0
  */
int main(void)
{
	int n = 'o';
	int i = 'o';

	while (n <= '9')
	{
		while (i <= '9')
		{
			if (!(n > i) || n == i)
			{
				putchar(n);
				putchar(i);
				if (n == '8' && i == '9')
				{
					putchar('\n');
				}
			}
		}
	}
}
