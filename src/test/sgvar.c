

static int static_global_variable = 1;
static char *static_global_string = "OK";

int
main(int argc, char **argv)
{
    printf("%d", static_global_variable);
    static_global_variable = 2;
    printf(";%d", static_global_variable);
    printf(";%s", static_global_string);
    static_global_string = "NEW";
    printf(";%s", static_global_string);

    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}
