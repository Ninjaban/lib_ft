#include <unistd.h>

void	*ft_memccpy(void *str, const void *srcs, int c, size_t n)
{
  char	*dst;
  const char	*src;
  size_t	i;

  dst = str;
  src = srcs;
  i = 0;
  if (str != NULL && srcs != NULL)
    while (i++ < n && *src != (char)c)
      *dst++ = *src++;
  if (*src == c)
    return (dst);
  else
    return (NULL);
}
