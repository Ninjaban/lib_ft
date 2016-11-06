#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  t_list	*next;

  while (*alst != NULL)
    {
      next = *alst->next;
      del(*alst->content, *alst->content_size);
      free(*alst);
      *alst = next;
    }
}
