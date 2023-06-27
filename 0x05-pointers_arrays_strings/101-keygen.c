#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int password_length = 12;
	char password[] = "Tada! Congrats";

	srand(time(0));

	printf("%s\n", password);

	return 0;
}

