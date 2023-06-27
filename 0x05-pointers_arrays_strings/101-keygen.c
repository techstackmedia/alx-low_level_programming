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
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[13];
	int i;

	srand(time(0));

	for (i = 0; i < password_length; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}

	password[password_length] = '\0';

	printf("%s\n", password);

	return 0;
}

