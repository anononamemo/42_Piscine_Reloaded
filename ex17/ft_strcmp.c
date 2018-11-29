int ft_strcmp(char *s1, char *s2)
{
  int lenS1 = 0;
  int lenS2 = 0;
  while (*s1)
    {
      lenS1++;
      s1++;
    }
  while (*s2)
    {
      lenS2++;
      s2++;
    }
  
  return (lenS2 - lenS1);
}



