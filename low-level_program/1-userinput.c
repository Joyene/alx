#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always (success)
  */
int main(void)
{
	char firstName[30];

	printf("Enter your firstName: \n");

	scanf("%s", firstName);

	printf("Hello %s. ", firstName);

	return (0);
}
