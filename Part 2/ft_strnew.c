#include <stdlib.h>

char	*ft_strnew(size_t size)
{
  char	*str;

  if ((str = malloc(size)) == NULL)
    return (NULL);
  while (--size >= 0)
    str[size] = '\0';
  return (str);
}
