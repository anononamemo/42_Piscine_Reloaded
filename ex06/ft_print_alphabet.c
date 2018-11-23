#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_alphabet(void)
{
  int i = 97;
  while (i >= 97 && i <= 122)
    ft_putchar(i++);
  ft_putchar('\n');
}

/* 
int main()
{
  ft_print_alphabet();
  return 0;
}
*/
