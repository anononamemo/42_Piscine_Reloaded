#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  while (*str)
    ft_putchar(*str++);
  ft_putchar('\n');
}

int main(int argc, char **argv)
{
  int i = 1;
  
  if (argc > 1)
      while(argv[i])
	  ft_putstr(argv[i++]);
  return(0);
}
