/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    unsigned int num = 1;
    char *endian = (char *)&num;

    /* If the first byte is non-zero, the machine is little endian */
    return (*endian == 1);
}

