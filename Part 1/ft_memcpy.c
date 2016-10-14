#include <unistd.h>
#include <stdlib.h>

void	*ft_memcpy(void *str, const void *src, size_t n)
{
  char	*dst;
  size_t	i;

  dst = str;
  i = 0;
  if (str != NULL && src != NULL)
    while (i++ < n)
      *dst++ = src[i];
  return (dst);
}
