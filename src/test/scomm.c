

static int static_common_symbol;
static char *static_common_string;

int
main(int argc, char **argv)
{
    static_common_symbol = 1;
    printf("%d", static_common_symbol);
    static_common_symbol = 2;
    printf(";%d", static_common_symbol);

    static_common_string = "OK";
    printf(";%s", static_common_string);
    static_common_string = "NEW";
    printf(";%s", static_common_string);


    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}