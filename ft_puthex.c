char ft_hex(int c)
{
    if(c < 10 && c >= 0)
        return(c + '0');
    else if (c >= 10 && c < 16)
        return(c + 'W');
}

void    ft_converthex(int num)
{
  char c;
  if (num < 16)
  {
    c = ft_hex(num);
    return(ft_putchar_fd(c, 1));
  }
  if (num > 16)
    ft_converthex(num/16);
  c = ft_hex(num % 16);      
  ft_putchar_fd(c, 1);
}