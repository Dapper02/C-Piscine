#include <stdio.h>

int main(void) {

    char dest[10] = "abc";
    char src[] = "def";

	ft_strcat(dest, src);
    printf("%s\n", dest);
    return 0;
}
