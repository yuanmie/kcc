

int
main(int argc, char **argv)
{
    int p[3][3];

    p[0][0] = 3;
    p[0][1] = 4;
    p[0][2] = 5;
    p[1][0] = 6;
    p[1][1] = 7;
    p[1][2] = 8;
    p[2][0] = 9;
    p[2][1] = 10;
    p[2][2] = 11;

    printf("%d;", p[0][0]);
    printf("%d;", p[0][1]);
    printf("%d;", p[0][2]);
    printf("%d;", p[1][0]);
    printf("%d;", p[1][1]);
    printf("%d;", p[1][2]);
    printf("%d;", p[2][0]);
    printf("%d;", p[2][1]);
    printf("%d;", p[2][2]);


    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}