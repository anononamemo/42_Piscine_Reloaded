int ft_sqrt(int nb)
{
  int i = 1;
  
  if (nb < 0 || nb >= 32767)
    return(0);
  else
    {
      while (i < nb && (i * i) < nb)
	i++;
    }
  return (i);
}
