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
    int i;

    srand(time(0));

    do {
        for (i = 0; i < password_length; i++) {
            password[i] = rand() % 94 + 32;  /* ASCII printable characters range from 32 to 126 */
        }
        password[password_length] = '\0';
    } while (strcmp(password, expected_password) != 0);

    printf("%s\n", password);

    return 0;
}

