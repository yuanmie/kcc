

int
main(int argc, char **argv)
{
    static int static_variable;
    static char *static_string;

    static_variable = 1;
    printf("%d", static_variable);
    static_variable = 2;
    printf(";%d", static_variable);
    static_string = "OK";
    printf(";%s", static_string);
    static_string = "NEW";
    printf(";%s", static_string);

    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}
