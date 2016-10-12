#include <stdlib.h>

void	ft_striter(char *s, void (*f)(char *))
{
  size_t	n;

  n = 0;
  while (s[n] != '\0')
    f(&(s[n++]));
}
