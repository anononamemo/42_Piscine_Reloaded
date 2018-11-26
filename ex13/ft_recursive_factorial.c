int ft_recursive_factorial(int nb)
{
  if (nb == 0)
    return(1);
  else if (nb < 0 || nb > 12)
    return(0);
  else
    {
      c = c * nb;
      ft_recursive_factorial(nb -1);
    }
  return (c);
}
