#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list (*f)(t_list *elem))
{
  t_list	*start;
  t_list	*new;

  if (lst == NULL)
    return (NULL);
  start = f(lst);
  lst = lst->next;
  if (lst == NULL)
    return (start);
  start->next = f(lst);
  new = start->next;
  lst = lst->next;
  while (lst != NULL)
    {
      new->next = f(lst);
      new = new->next;
      lst = lst->next;
    }
  return (start);
}