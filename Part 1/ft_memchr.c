#include <unistd.h>
#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
  const unsigned char	*dst;
  size_t	i;

  dst = str;
  i = 0;
  if (str == NULL)
    return (NULL);
  while (i < n && (*dst++ != (unsigned char)c))
    i = i + 1;
  if (str[i] == c)
    return (dst);
  else
    return (NULL);
}
