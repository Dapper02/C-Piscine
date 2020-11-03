#include <stdio.h>

int main()
{
    int result;

    result = ft_str_is_alpha("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("999");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("");
    printf("Result: %d\n", result);

    return 0;
}
