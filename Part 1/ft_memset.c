#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
  char	*dst;
  size_t	i;

  dst = str;
  i = 0;
  while (i++ < n)
    *dst++ = c;
  return (dst);
}
