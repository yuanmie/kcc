

int
main(int argc, char **argv)
{
    long i = 1;
    
    printf("%ld", i);
    i <<= 1;
    printf(";%ld", i);
    i <<= 61;
    printf(";%ld", i);
    i <<= 1;
    printf(";%ld", i);
    i <<= 1;
    printf(";%ld", i);

    return 0;
}
static int
printf(char *s, ...)
{
    return 1;
}
