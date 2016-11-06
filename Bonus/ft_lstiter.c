#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
  while (lst != NULL)
    {
      lst = f(lst);
      lst = lst->next;
    }
}
