

union u1 {
    char x;
};

union u2 {
    char x;
    char y;
    char z;
};

union u3 {
    char x;
    short y;
    int z;
};

union u4 {
    char x;
    short y;
    int z;
    char a[5];
};

int
main(int argc, char **argv)
{
    printf("%ld", sizeof(union u1));
    printf(";%ld", sizeof(union u2));
    printf(";%ld", sizeof(union u3));
    printf(";%ld", sizeof(union u4));


    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}