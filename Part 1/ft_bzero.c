#include <stdlib.h>

void	bzero(void *str, size_t n)
{
  char	*dst;
  size_t	i;

  dst = str;
  i = 0;
  while (i++ < n)
    *dst++ = 0;
}
