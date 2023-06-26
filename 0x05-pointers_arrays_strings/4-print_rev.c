#include "main.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
  int length = 0;
  while (*s != '\0') {
    length++;
    s++;
  }
  while (length > 0) {
    s--;
    _putchar(*s);
    length--;
  }
  _putchar('\n');
}

