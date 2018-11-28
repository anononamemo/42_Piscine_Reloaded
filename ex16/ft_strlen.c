int ft_strlen(char *str)
{
  int len = 0;
  
  while (*str)
    {
      len++;
      str++;
    }
  return(len);
}
