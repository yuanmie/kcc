

int
main(int argc, char **argv)
{
    int i;

    i = 1; printf("%d", i);
    i = 2; printf(";%d\n", i);
    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}
