int main()
{
  char str[] = "214647483";
  // ft_atoi("015645");
  printf("%d\n",ft_atoi("\t\n\v\f\r -256"));
  printf("%d\n",ft_atoi("aaaaa999"));
  printf("%d\n",ft_atoi("-256aaaa999"));
  printf("%d\n",ft_atoi("256aaaa999"));
  return(0);
}
