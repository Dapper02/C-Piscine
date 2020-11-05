#include <unistd.h>
#include <stdio.h>

int main()
{
 char str[] = "sdfsd";
 char to_find[] = "asdf";
 unsigned int n =  2;

 printf("%s", ft_strlcat(str, to_find, n ));

 return(0);
}
