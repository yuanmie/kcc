

int
main(int argc, char **argv)
{
    int i = 1;
    printf("%d;%d;%d;%d;%d", i << 0, i << 1, i << 2, i << 3, i << 4);

    return 0;
}
static int
printf(char *s, ...)
{
    return 1;
}
