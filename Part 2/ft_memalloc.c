#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
  void	*ptr;

  if ((ptr = malloc(size)) == NULL)
    return (NULL);
  while (--size >= 0)
    ptr[size] = 0;
  return (ptr);
}
