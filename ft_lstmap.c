/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:52:43 by aliens            #+#    #+#             */
/*   Updated: 2020/12/15 18:16:48 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_protect_free(t_list *lst)
{
	ft_lstiter(lst, free);
	free(lst);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*lst3;
	t_list	*dst;

	if (!lst)
		return (NULL);
	if (!f)
		return (lst);
	dst = NULL;
	lst3 = lst;
	while (lst)
	{
		if (!(lst2 = ft_lstnew(f(lst->content))))
		{
			if (!del)
				ft_protect_free(lst3);
			else
				ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&dst, lst2);
		lst = lst->next;
	}
	return (dst);
}
