

int
main(int argc, char **argv)
{
    int i = 3;

    printf("%d", i);
    while (i) {
        printf(";%d", i);
        i--;
    }
    printf(";%d\n", i);
    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}
