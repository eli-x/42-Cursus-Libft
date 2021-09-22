#include "libft.h"

/*
 * loop through lst to the end of the list
 * and call functx f with each element to create a new list
 * del to use if needs deleting an element
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
		return (NULL);
	lst = lst->next;
	res = tmp;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
