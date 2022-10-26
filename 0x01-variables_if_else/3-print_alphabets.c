#include <stdio.h>

/**
  * main - Prints alphabets in lowercase and then in uppercase
  *
  * Return: Always (success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}


	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
