#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always (success)
  */
int main(void)
{
	int myNumbers[] = {25, 35, 45, 55};

	myNumbers[3] = 65;

	printf("%d", myNumbers[3]);
}
