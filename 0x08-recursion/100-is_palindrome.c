#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * is_palindrome - check if string is palindrome
  * @s: the string to be used
  *
  * Return: string or nothing
  */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int m, n;

	if (length == 0)
		return (1);

	for (m = 0, n = length - 1; m < n; m++, n--)
	{
		if (s[m] != s[n])
			return (0);
	}

	return (1);
}

/**
  * main - Entry point
  *
  * Description: A program that shows the usage of is_palindrome
  * Return: Always 0 success
  */
int main(void)
{
	char str1[] = "level";
	char str2[] = "hello";
	char str3[] = "";

	printf("%s is a palindrom: %d\n", str1, is_palindrome(str1));
	printf("%s is a palindrom: %d\n", str2, is_palindrome(str2));
	printf("%s is a palindrom: %d\n", str3, is_palindrome(str3));

	return (0);
}
