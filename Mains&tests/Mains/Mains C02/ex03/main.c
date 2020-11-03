#include <stdio.h>

int main()
{
    int result;

    result = ft_str_is_numeric("123456");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("asd1234");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("0");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("12345asdf");
    printf("Result: %d\n", result);

    return 0;
}
