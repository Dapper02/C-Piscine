#include <stdio.h>
#include <string.h>

int main(void) {
  char str[] = "salut";
  char stl[] = "bonjour";

  printf("%s", ft_strncpy(str ,stl, 4));
  return 0;
}
