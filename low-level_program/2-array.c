#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always (success)
  */
int main(void)
{
	int myNumbers[] = {20, 30, 40, 50, 60, 70};

	int i;

	for (i = 0; i < 6; i++)
	{
		printf("%d\n", myNumbers[i]);
	}
	return (0);
}
