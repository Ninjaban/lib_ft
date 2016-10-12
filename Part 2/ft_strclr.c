#include <stdlib.h>

void	ft_strclr(char *s)
{
  size_t	n;

  n = 0;
  while (s[n] != '\0')
    s[n++] = '\0';
}
