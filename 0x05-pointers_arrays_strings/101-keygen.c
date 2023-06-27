#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int password_length = 15;
    char expected_password[] = "Tada! Congrats";
    char password[16];

    strncpy(password, expected_password, password_length);
    password[password_length] = '\0';

    printf("%s\n", password);

    return 0;
}

